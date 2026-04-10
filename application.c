/* 
 * File:   application.c
 * Author: Adham
 *
 * Created on July 6, 2024, 6:01 PM
 */

#include "application.h"

volatile uint8 mode_status = TRAFFIC_MODE;
Traffic_State_t current_state = STATE_GREEN;
volatile uint8 ped_request = 0;
volatile uint8 timer_counter;


int main() {
    Std_ReturnType retVal = E_NOT_OK; //fixed
    application_initialize(); //fixed
    
    // Initial Setup
    current_state = STATE_GREEN;
    Update_Traffic_LEDs(current_state);
    uint8 display_time = 0;
    
    while(1){
        if (current_state == STATE_GREEN) {
            if (timer_counter >= GREEN_MAX_TIME) {
                current_state = STATE_YELLOW;
                timer_counter = 0;
                Update_Traffic_LEDs(current_state);
            } else {
                display_time = (uint8)(GREEN_MAX_TIME - timer_counter);
            }
        } 
        else if (current_state == STATE_YELLOW) {
            if (timer_counter >= YELLOW_MAX_TIME) {
                current_state = STATE_RED;
                timer_counter = 0;
                Update_Traffic_LEDs(current_state);
            } else {
                display_time = (uint8)(YELLOW_MAX_TIME - timer_counter);
            }
        } 
        else if (current_state == STATE_RED) {
            if (timer_counter >= RED_MAX_TIME) {
                current_state = STATE_GREEN;
                timer_counter = 0;
                Update_Traffic_LEDs(current_state);
            } else {
                display_time = (uint8)(RED_MAX_TIME - timer_counter);
            }
        }
        if(display_time <= 99) {
        Traffic_Time_Display(display_time);
    }
    }
    return (EXIT_SUCCESS);
}

void application_initialize(void){
    Std_ReturnType retVal = E_NOT_OK; //fixed
    ecu_layer_initialize(); //fixed 
    mcal_layer_initialize(); //fixed
}

void Traffic_Time_Display(uint8 time) {
    // 1. CLEAR EVERYTHING (The "Blanking" Phase)
    gpio_pin_write_logic(&counter_seg_enable_1, GPIO_LOW);
    gpio_pin_write_logic(&counter_seg_enable_2, GPIO_LOW);
    __delay_ms(1); // Give Proteus a moment to "erase" the screen

    // 2. Units Digit
    seven_segment_write_number(&counter_segment, (uint8)(time / 10));
    gpio_pin_write_logic(&counter_seg_enable_1, GPIO_HIGH);
    __delay_ms(15); // Increased delay for simulation stability

    // 3. CLEAR AGAIN
    gpio_pin_write_logic(&counter_seg_enable_1, GPIO_LOW);
    __delay_ms(1);

    // 4. Tens Digit
    seven_segment_write_number(&counter_segment, (uint8)(time % 10));
    gpio_pin_write_logic(&counter_seg_enable_2, GPIO_HIGH);
    __delay_ms(15);
}


void Update_Traffic_LEDs(Traffic_State_t state) {
    gpio_pin_write_logic(&Led_T_green, GPIO_LOW);
    gpio_pin_write_logic(&Led_T_yellow, GPIO_LOW);
    gpio_pin_write_logic(&Led_T_red, GPIO_LOW);
    gpio_pin_write_logic(&Led_P_green, GPIO_LOW);
    gpio_pin_write_logic(&Led_P_red, GPIO_LOW);

    // Turn on the correct LEDs for the active state
    switch(state) {
        case STATE_GREEN:
            gpio_pin_write_logic(&Led_T_green, GPIO_HIGH);
            gpio_pin_write_logic(&Led_P_red, GPIO_HIGH); // Pedestrians wait
            break;
        case STATE_YELLOW:
            gpio_pin_write_logic(&Led_T_yellow, GPIO_HIGH);
            gpio_pin_write_logic(&Led_P_red, GPIO_HIGH); // Pedestrians wait
            break;
        case STATE_RED:
            gpio_pin_write_logic(&Led_T_red, GPIO_HIGH);
            gpio_pin_write_logic(&Led_P_green, GPIO_HIGH); // Pedestrians go
            break;
    }
}

void TIMER0_IneterruptHandler(void)
{
    timer_counter++;
}
void INT0_PedBtnIneterruptHandler(void)
{
    if (current_state == STATE_GREEN) {
        // Force the state to change
        current_state = STATE_YELLOW;
        timer_counter = 0; // Reset timer so Yellow starts
        Update_Traffic_LEDs(current_state);
    }
}



