/* 
 * File:   ecu_layer_initialize.c
 * Author: Adham
 *
 * Created on July 23, 2024, 5:28 PM
 */

#include "ecu_layer_initialize.h"

led_t led_1 = {
  .port = PORTD_INDEX,
  .pin = GPIO_PIN0,
  .led_status = LED_OFF,
};
//led_t led_2 = {
//  .port = PORTC_INDEX,
//  .pin = GPIO_PIN1,
//  .led_status = LED_OFF,
//};

//chr_lcd_8bit_t lcd_manar = {
//    .lcd_rs.port = PORTD_INDEX,
//    .lcd_rs.pin = GPIO_PIN0,
//    .lcd_rs.direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_rs.logic = GPIO_LOW,
//    
//    .lcd_en.port = PORTD_INDEX,
//    .lcd_en.pin = GPIO_PIN1,
//    .lcd_en.direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_en.logic = GPIO_LOW,
//    
//    .lcd_data[0].port = PORTC_INDEX,
//    .lcd_data[0].pin = GPIO_PIN0,
//    .lcd_data[0].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[0].logic = GPIO_LOW,
//    .lcd_data[1].port = PORTC_INDEX,
//    .lcd_data[1].pin = GPIO_PIN1,
//    .lcd_data[1].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[1].logic = GPIO_LOW,
//    .lcd_data[2].port = PORTC_INDEX,
//    .lcd_data[2].pin = GPIO_PIN2,
//    .lcd_data[2].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[2].logic = GPIO_LOW,
//    .lcd_data[3].port = PORTC_INDEX,
//    .lcd_data[3].pin = GPIO_PIN3,
//    .lcd_data[3].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[3].logic = GPIO_LOW,
//    .lcd_data[4].port = PORTC_INDEX,
//    .lcd_data[4].pin = GPIO_PIN4,
//    .lcd_data[4].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[4].logic = GPIO_LOW,
//    .lcd_data[5].port = PORTC_INDEX,
//    .lcd_data[5].pin = GPIO_PIN5,
//    .lcd_data[5].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[5].logic = GPIO_LOW,
//    .lcd_data[6].port = PORTC_INDEX,
//    .lcd_data[6].pin = GPIO_PIN6,
//    .lcd_data[6].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[6].logic = GPIO_LOW,
//    .lcd_data[7].port = PORTC_INDEX,
//    .lcd_data[7].pin = GPIO_PIN7,
//    .lcd_data[7].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[7].logic = GPIO_LOW,
//};

//dc_motor_t dc_motor_1 = {
//    .dc_motor_pin[DC_MOTOR_PIN1].port = PORTD_INDEX,
//    .dc_motor_pin[DC_MOTOR_PIN1].pin = GPIO_PIN2,
//    .dc_motor_pin[DC_MOTOR_PIN1].logic= DC_MOTOR_OFF_STATUS,
//    .dc_motor_pin[DC_MOTOR_PIN2].port = PORTD_INDEX,
//    .dc_motor_pin[DC_MOTOR_PIN2].pin = GPIO_PIN3,
//    .dc_motor_pin[DC_MOTOR_PIN2].logic = DC_MOTOR_OFF_STATUS,
//};
//
//dc_motor_t dc_motor_2 = {
//    .dc_motor_pin[DC_MOTOR_PIN1].port = PORTD_INDEX,
//    .dc_motor_pin[DC_MOTOR_PIN1].pin = GPIO_PIN4,
//    .dc_motor_pin[DC_MOTOR_PIN1].logic= DC_MOTOR_OFF_STATUS,
//    .dc_motor_pin[DC_MOTOR_PIN2].port = PORTD_INDEX,
//    .dc_motor_pin[DC_MOTOR_PIN2].pin = GPIO_PIN5,
//    .dc_motor_pin[DC_MOTOR_PIN2].logic = DC_MOTOR_OFF_STATUS,
//};



//chr_lcd_4bit_t lcd_4bit = {
//    .lcd_rs.port = PORTC_INDEX,
//    .lcd_rs.pin = GPIO_PIN0,
//    .lcd_rs.direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_rs.logic = GPIO_LOW,
//    
//    .lcd_en.port = PORTC_INDEX,
//    .lcd_en.pin = GPIO_PIN1,
//    .lcd_en.direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_en.logic = GPIO_LOW,
//    
//    .lcd_data[0].port = PORTB_INDEX,
//    .lcd_data[0].pin = GPIO_PIN0,
//    .lcd_data[0].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[0].logic = GPIO_LOW,
//    .lcd_data[1].port = PORTB_INDEX,
//    .lcd_data[1].pin = GPIO_PIN1,
//    .lcd_data[1].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[1].logic = GPIO_LOW,
//    .lcd_data[2].port = PORTB_INDEX,
//    .lcd_data[2].pin = GPIO_PIN2,
//    .lcd_data[2].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[2].logic = GPIO_LOW,
//    .lcd_data[3].port = PORTB_INDEX,
//    .lcd_data[3].pin = GPIO_PIN3,
//    .lcd_data[3].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[3].logic = GPIO_LOW,
//};
//
//chr_lcd_8bit_t lcd_8bit = {
//    .lcd_rs.port = PORTD_INDEX,
//    .lcd_rs.pin = GPIO_PIN0,
//    .lcd_rs.direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_rs.logic = GPIO_LOW,
//    
//    .lcd_en.port = PORTD_INDEX,
//    .lcd_en.pin = GPIO_PIN1,
//    .lcd_en.direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_en.logic = GPIO_LOW,
//    
//    .lcd_data[0].port = PORTC_INDEX,
//    .lcd_data[0].pin = GPIO_PIN0,
//    .lcd_data[0].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[0].logic = GPIO_LOW,
//    .lcd_data[1].port = PORTC_INDEX,
//    .lcd_data[1].pin = GPIO_PIN1,
//    .lcd_data[1].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[1].logic = GPIO_LOW,
//    .lcd_data[2].port = PORTC_INDEX,
//    .lcd_data[2].pin = GPIO_PIN2,
//    .lcd_data[2].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[2].logic = GPIO_LOW,
//    .lcd_data[3].port = PORTC_INDEX,
//    .lcd_data[3].pin = GPIO_PIN3,
//    .lcd_data[3].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[3].logic = GPIO_LOW,
//    .lcd_data[4].port = PORTC_INDEX,
//    .lcd_data[4].pin = GPIO_PIN4,
//    .lcd_data[4].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[4].logic = GPIO_LOW,
//    .lcd_data[5].port = PORTC_INDEX,
//    .lcd_data[5].pin = GPIO_PIN5,
//    .lcd_data[5].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[5].logic = GPIO_LOW,
//    .lcd_data[6].port = PORTC_INDEX,
//    .lcd_data[6].pin = GPIO_PIN6,
//    .lcd_data[6].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[6].logic = GPIO_LOW,
//    .lcd_data[7].port = PORTC_INDEX,
//    .lcd_data[7].pin = GPIO_PIN7,
//    .lcd_data[7].direction = GPIO_DIRECTION_OUTPUT,
//    .lcd_data[7].logic = GPIO_LOW,
//};


keypad_t keypad1 = {
    .keypad_rows_pins[0].port = PORTC_INDEX,
    .keypad_rows_pins[0].pin = GPIO_PIN0,
    .keypad_rows_pins[0].direction = GPIO_DIRECTION_OUTPUT,
    .keypad_rows_pins[0].logic = GPIO_LOW,
    .keypad_rows_pins[1].port = PORTC_INDEX,
    .keypad_rows_pins[1].pin = GPIO_PIN1,
    .keypad_rows_pins[1].direction = GPIO_DIRECTION_OUTPUT,
    .keypad_rows_pins[1].logic = GPIO_LOW,
    .keypad_rows_pins[2].port = PORTC_INDEX,
    .keypad_rows_pins[2].pin = GPIO_PIN2,
    .keypad_rows_pins[2].direction = GPIO_DIRECTION_OUTPUT,
    .keypad_rows_pins[2].logic = GPIO_LOW,
    .keypad_rows_pins[3].port = PORTC_INDEX,
    .keypad_rows_pins[3].pin = GPIO_PIN3,
    .keypad_rows_pins[3].direction = GPIO_DIRECTION_OUTPUT,
    .keypad_rows_pins[3].logic = GPIO_LOW,
    
    .keypad_columns_pins[0].port = PORTC_INDEX,
    .keypad_columns_pins[0].pin = GPIO_PIN4,
    .keypad_columns_pins[0].direction = GPIO_DIRECTION_INPUT,
    .keypad_columns_pins[0].logic = GPIO_LOW,
    .keypad_columns_pins[1].port = PORTC_INDEX,
    .keypad_columns_pins[1].pin = GPIO_PIN5,
    .keypad_columns_pins[1].direction = GPIO_DIRECTION_INPUT,
    .keypad_columns_pins[1].logic = GPIO_LOW,
    .keypad_columns_pins[2].port = PORTC_INDEX,
    .keypad_columns_pins[2].pin = GPIO_PIN6,
    .keypad_columns_pins[2].direction = GPIO_DIRECTION_INPUT,
    .keypad_columns_pins[2].logic = GPIO_LOW,
    .keypad_columns_pins[3].port = PORTC_INDEX,
    .keypad_columns_pins[3].pin = GPIO_PIN7,
    .keypad_columns_pins[3].direction = GPIO_DIRECTION_INPUT,
    .keypad_columns_pins[3].logic = GPIO_LOW,
};
//
//led_t key_led = {
//  .port = PORTD_INDEX,
//  .pin = GPIO_PIN0,
//  .led_status = LED_OFF,
//};




//segment_t big_seg = {
//    .segment_pin[0].port = PORTB_INDEX,
//    .segment_pin[0].pin = GPIO_PIN0,
//    .segment_pin[0].direction = GPIO_DIRECTION_OUTPUT,
//    .segment_pin[0].logic = GPIO_LOW,
//    .segment_pin[1].port = PORTB_INDEX,
//    .segment_pin[1].pin = GPIO_PIN1,
//    .segment_pin[1].direction = GPIO_DIRECTION_OUTPUT,
//    .segment_pin[1].logic = GPIO_LOW,
//    .segment_pin[2].port = PORTB_INDEX,
//    .segment_pin[2].pin = GPIO_PIN2,
//    .segment_pin[2].direction = GPIO_DIRECTION_OUTPUT,
//    .segment_pin[2].logic = GPIO_LOW,
//    .segment_pin[3].port = PORTB_INDEX,
//    .segment_pin[3].pin = GPIO_PIN3,
//    .segment_pin[3].direction = GPIO_DIRECTION_OUTPUT,
//    .segment_pin[3].logic = GPIO_LOW,
//    .segment_type = SEGMENT_COMMON_ANODE
//};
//
//pin_config_t big_seg_enable_1 = {
//    .port = PORTD_INDEX,
//    .pin = GPIO_PIN1,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};
//pin_config_t big_seg_enable_2 = {
//    .port = PORTD_INDEX,
//    .pin = GPIO_PIN2,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};
//pin_config_t big_seg_enable_3 = {
//    .port = PORTD_INDEX,
//    .pin = GPIO_PIN3,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};
//pin_config_t big_seg_enable_4 = {
//    .port = PORTD_INDEX,
//    .pin = GPIO_PIN4,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};
//pin_config_t big_seg_enable_5 = {
//    .port = PORTD_INDEX,
//    .pin = GPIO_PIN5,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};
//pin_config_t big_seg_enable_6 = {
//    .port = PORTD_INDEX,
//    .pin = GPIO_PIN6,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};





//segment_t counter_segment = {
//    .segment_pin[0].port = PORTB_INDEX,
//    .segment_pin[0].pin = GPIO_PIN4,
//    .segment_pin[0].direction = GPIO_DIRECTION_OUTPUT,
//    .segment_pin[0].logic = GPIO_LOW,
//    .segment_pin[1].port = PORTB_INDEX,
//    .segment_pin[1].pin = GPIO_PIN5,
//    .segment_pin[1].direction = GPIO_DIRECTION_OUTPUT,
//    .segment_pin[1].logic = GPIO_LOW,
//    .segment_pin[2].port = PORTB_INDEX,
//    .segment_pin[2].pin = GPIO_PIN6,
//    .segment_pin[2].direction = GPIO_DIRECTION_OUTPUT,
//    .segment_pin[2].logic = GPIO_LOW,
//    .segment_pin[3].port = PORTB_INDEX,
//    .segment_pin[3].pin = GPIO_PIN7,
//    .segment_pin[3].direction = GPIO_DIRECTION_OUTPUT,
//    .segment_pin[3].logic = GPIO_LOW,
//    .segment_type = SEGMENT_COMMON_ANODE
//};
//pin_config_t counter_seg_enable_1 = {
//    .port = PORTE_INDEX,
//    .pin = GPIO_PIN0,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};
//pin_config_t counter_seg_enable_2 = {
//    .port = PORTE_INDEX,
//    .pin = GPIO_PIN1,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};

//uint8 number = 48;




//uint8 seg_common_anode_values[10] = {0xC0 , 0xF9 , 0xA4 , 0xB0 , 0x99 , 0x92 , 0x82 , 0xF8 , 0x80 , 0x90};
//
// /*-----------------------------------------------------------*/

//dc_motor_t dc_motor_1 = {
//    .dc_motor_pin[DC_MOTOR_PIN1].port = PORTD_INDEX,
//    .dc_motor_pin[DC_MOTOR_PIN1].pin = GPIO_PIN1,
//    .dc_motor_pin[DC_MOTOR_PIN1].logic= DC_MOTOR_OFF_STATUS,
//    .dc_motor_pin[DC_MOTOR_PIN2].port = PORTD_INDEX,
//    .dc_motor_pin[DC_MOTOR_PIN2].pin = GPIO_PIN2,
//    .dc_motor_pin[DC_MOTOR_PIN2].logic = DC_MOTOR_OFF_STATUS,
//};
//
//dc_motor_t dc_motor_2 = {
//    .dc_motor_pin[DC_MOTOR_PIN1].port = PORTD_INDEX,
//    .dc_motor_pin[DC_MOTOR_PIN1].pin = GPIO_PIN3,
//    .dc_motor_pin[DC_MOTOR_PIN1].logic= DC_MOTOR_OFF_STATUS,
//    .dc_motor_pin[DC_MOTOR_PIN2].port = PORTD_INDEX,
//    .dc_motor_pin[DC_MOTOR_PIN2].pin = GPIO_PIN4,
//    .dc_motor_pin[DC_MOTOR_PIN2].logic = DC_MOTOR_OFF_STATUS,
//};

///*------------------------------------------------------------------*/

//relay_t relay_1 = {
//  .relay_port   = PORTA_INDEX,
//  .relay_pin    = GPIO_PIN4,
//  .relay_status = RELAY_OFF_STATUS
//};

///*------------------------------------------------------------------*/

//button_t btn_high = {
//    .button_pin.port = PORTA_INDEX,
//    .button_pin.pin = GPIO_PIN@,
//    .button_pin.direction = GPIO_DIRECTION_INPUT,
//    .button_pin.logic = GPIO_LOW,
//    .button_connection = BUTTON_ACTIVE_HIGH,
//    .button_state = BUTTON_RELEASED,
//};
//
//button_t btn_low = {
//    .button_pin.port = PORTA_INDEX,
//    .button_pin.pin = GPIO_PIN3,
//    .button_pin.direction = GPIO_DIRECTION_INPUT,
//    .button_pin.logic = GPIO_HIGH,
//    .button_connection = BUTTON_ACTIVE_LOW,
//    .button_state = BUTTON_RELEASED,
//};
//led_t led_high = {
//  .port = PORTA_INDEX,
//  .pin = GPIO_PIN0,
//  .led_status = LED_OFF,
//};
//led_t led_low = {
//  .port = PORTA_INDEX,
//  .pin = GPIO_PIN1,
//  .led_status = LED_ON,
//};
//
//button_state_t btn_high_status = BUTTON_RELEASED;
//button_state_t btn_low_status = BUTTON_RELEASED;

///*------------------------------------------------------------------*/
//led_t led_1 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN0,
//    .led_status = GPIO_LOW
//};
//led_t led_2 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN1,
//    .led_status = GPIO_LOW
//};
//led_t led_3 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN2,
//    .led_status = GPIO_LOW
//};
//led_t led_4 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN3,
//    .led_status = GPIO_LOW
//};
//led_t led_5 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN4,
//    .led_status = GPIO_LOW
//};
//led_t led_6 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN5,
//    .led_status = GPIO_LOW
//};
//led_t led_7 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN6,
//    .led_status = GPIO_LOW
//};
//led_t led_8 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN7,
//    .led_status = GPIO_LOW
//};

//led_t led_1 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN0,
//    .led_status = GPIO_LOW
//};
//led_t led_2 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN1,
//    .led_status = GPIO_LOW
//};
//led_t led_3 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN2,
//    .led_status = GPIO_LOW
//};
//led_t led_4 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN3 ,
//    .led_status = GPIO_LOW
//};

//#define HWREG8(_x) (*((volatile uint8 *)(_x)))
//
//#define ADHAM_LATC (HWREG8(0xF8B))
//#define ADHAM_TRISC (HWREG8(0xF94))
//
//typedef union {
//    struct{
//        unsigned LATC_SELF0 :1;
//        unsigned LATC_SELF1 :1;
//        unsigned LATC_SELF2 :1;
//        unsigned LATC_SELF3 :1;
//        unsigned LATC_SELF4 :1;
//        unsigned LATC_SELF5 :1;
//        unsigned LATC_SELF6 :1;
//        unsigned LATC_SELF7 :1;
//    };
//    uint8 LATC_REGISTER;
//}LATC_SELF;
//
//#define LATC_SELF_REG ((volatile LATC_SELF*)0xF8B)


//pin_config_t led_1 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN0,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};
//pin_config_t led_2 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN1,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};
//pin_config_t led_3 = {
//    .port = PORTC_INDEX,
//    .pin = GPIO_PIN2,
//    .direction = GPIO_DIRECTION_OUTPUT,
//    .logic = GPIO_LOW
//};
//pin_config_t btn_1 = {
//    .port = PORTD_INDEX,
//    .pin = GPIO_PIN0,
//    .direction = GPIO_DIRECTION_INPUT,
//    .logic = GPIO_LOW
//};
//
//direction_t led1_status;
//logic_t btn1_status;
//uint8 portc_status;

void ecu_layer_initialize(void){
    Std_ReturnType retVal = E_NOT_OK; //fixed
    
//    retVal = lcd_8bit_initialize(&lcd_manar);
    
    retVal = led_initialize(&led_1);
//    retVal = led_initialize(&led_2);
    
//    retVal = dc_motor_initialize(&dc_motor_1);
//    retVal = dc_motor_initialize(&dc_motor_2);
    
//    retVal = lcd_4bit_initialize(&lcd_4bit);
//    retVal = lcd_8bit_initialize(&lcd_8bit);
    
    
    retVal = keypad_initialize(&keypad1);
    
//    retVal = led_initialize(&key_led);
    
//    retVal = seven_segment_initialize(&big_seg);
//    retVal = gpio_pin_initialize(&big_seg_enable_1);
//    retVal = gpio_pin_initialize(&big_seg_enable_2);
//    retVal = gpio_pin_initialize(&big_seg_enable_3);
//    retVal = gpio_pin_initialize(&big_seg_enable_4);
//    retVal = gpio_pin_initialize(&big_seg_enable_5);
//    retVal = gpio_pin_initialize(&big_seg_enable_6);
    
//    retVal = seven_segment_initialize(&counter_segment);
//    retVal = gpio_pin_initialize(&counter_seg_enable_1);
//    retVal = gpio_pin_initialize(&counter_seg_enable_2);
    
//    
//    retVal = gpio_port_direction_initialize(PORTB_INDEX , 0xF0); // 1111 0000
//    retVal = gpio_port_direction_initialize(PORTD_INDEX , 0x81); // 1000 0001
    
    
//    retVal = gpio_port_direction_initialize(PORTB_INDEX , 0);
//    retVal = gpio_port_write_logic(PORTB_INDEX , 0);
    
//    retVal = gpio_port_direction_initialize(PORTB_INDEX , 0x80);
//    retVal = gpio_port_write_logic(PORTB_INDEX , seg_common_anode_values[0]);
//    retVal = gpio_port_write_logic(PORTB_INDEX , seg_common_anode_values[0]);
//    
//    /*---------------------------------------------------------*/
    
//    retVal = dc_motor_initialize(&dc_motor_1);
//    retVal = dc_motor_initialize(&dc_motor_2);
    
///*------------------------------------------------------------------*/
    
//    retVal = relay_initialize(&relay_1);
//    retVal = gpio_pin_initialize(&led_1);
//    retVal = gpio_pin_initialize(&led_2);
//    retVal = gpio_pin_initialize(&led_3);
//    
//    retVal = gpio_pin_initialize(&btn_1);
    
//    retVal = gpio_port_direction_initialize(PORTC_INDEX , 0x00);
//    retVal = gpio_port_get_direction_status(PORTC_INDEX , &portc_status); 
//    retVal = gpio_port_write_logic(PORTC_INDEX , 0x55);
//    retVal = led_initialize(&led_1);
//    retVal = led_initialize(&led_2);
//    retVal = led_initialize(&led_3);
//    retVal = led_initialize(&led_4);
    
//    retVal = button_initialize(&btn_high);
//    retVal = button_initialize(&btn_low);
//    retVal = led_initialize(&led_high);
//    retVal = led_initialize(&led_low);
    
//    retVal = led_initialize(&led_1);
//    retVal = led_initialize(&led_2);
//    retVal = led_initialize(&led_3);
//    retVal = led_initialize(&led_4);
//    retVal = led_initialize(&led_5);
//    retVal = led_initialize(&led_6);
//    retVal = led_initialize(&led_7);
//    retVal = led_initialize(&led_8);
    
}

