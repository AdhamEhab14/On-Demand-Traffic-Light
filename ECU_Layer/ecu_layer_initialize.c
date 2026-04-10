/* 
 * File:   ecu_layer_initialize.c
 * Author: Adham
 *
 * Created on July 23, 2024, 5:28 PM
 */

#include "ecu_layer_initialize.h"


led_t Led_T_red = {
  .port = PORTD_INDEX,
  .pin = GPIO_PIN7,
  .led_status = LED_OFF,
};
led_t Led_T_yellow = {
  .port = PORTD_INDEX,
  .pin = GPIO_PIN6,
  .led_status = LED_OFF,
};
led_t Led_T_green = {
  .port = PORTD_INDEX,
  .pin = GPIO_PIN5,
  .led_status = LED_OFF,
};

led_t Led_P_red = {
  .port = PORTD_INDEX,
  .pin = GPIO_PIN1,
  .led_status = LED_OFF,
};

led_t Led_P_green = {
  .port = PORTD_INDEX,
  .pin = GPIO_PIN0,
  .led_status = LED_OFF,
};

segment_t counter_segment = {
    .segment_pin[0].port = PORTA_INDEX,
    .segment_pin[0].pin = GPIO_PIN0,
    .segment_pin[0].direction = GPIO_DIRECTION_OUTPUT,
    .segment_pin[0].logic = GPIO_LOW,
    
    .segment_pin[1].port = PORTA_INDEX,
    .segment_pin[1].pin = GPIO_PIN1,
    .segment_pin[1].direction = GPIO_DIRECTION_OUTPUT,
    .segment_pin[1].logic = GPIO_LOW,
    
    .segment_pin[2].port = PORTA_INDEX,
    .segment_pin[2].pin = GPIO_PIN2,
    .segment_pin[2].direction = GPIO_DIRECTION_OUTPUT,
    .segment_pin[2].logic = GPIO_LOW,
    
    .segment_pin[3].port = PORTA_INDEX,
    .segment_pin[3].pin = GPIO_PIN3,
    .segment_pin[3].direction = GPIO_DIRECTION_OUTPUT,
    .segment_pin[3].logic = GPIO_LOW,
    .segment_type = SEGMENT_COMMON_ANODE
};
pin_config_t counter_seg_enable_1 = {
    .port = PORTC_INDEX,
    .pin = GPIO_PIN0,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};
pin_config_t counter_seg_enable_2 = {
    .port = PORTC_INDEX,
    .pin = GPIO_PIN1,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};






void ecu_layer_initialize(void){
    Std_ReturnType retVal = E_NOT_OK; //fixed
    
    retVal = led_initialize(&Led_T_red);
    retVal = led_initialize(&Led_T_yellow);
    retVal = led_initialize(&Led_T_green);
    
    retVal = led_initialize(&Led_P_green);
    retVal = led_initialize(&Led_P_red);
    
    retVal = seven_segment_initialize(&counter_segment);
    retVal = gpio_pin_initialize(&counter_seg_enable_1);
    retVal = gpio_pin_initialize(&counter_seg_enable_2);
    

}

