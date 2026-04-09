/* 
 * File:   ecu_layer_initialize.c
 * Author: Adham
 *
 * Created on July 23, 2024, 5:28 PM
 */

#include "ecu_layer_initialize.h"


//led_t led_2 = {
//  .port = PORTC_INDEX,
//  .pin = GPIO_PIN1,
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
//button_state_t btn_high_status = BUTTON_RELEASED;
//button_state_t btn_low_status = BUTTON_RELEASED;



void ecu_layer_initialize(void){
    Std_ReturnType retVal = E_NOT_OK; //fixed
    
//    retVal = led_initialize(&led_2);
    
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
    

}

