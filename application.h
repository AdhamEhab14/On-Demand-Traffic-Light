/* 
 * File:   application.h
 * Author: Adham
 *
 * Created on July 6, 2024, 6:36 PM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

/***************************************Includes***************************************/

#include "ECU_Layer/ecu_layer_initialize.h"
#include "MCAL_Layer/mcal_layer_initialize.h"
#include <builtins.h> 

/***********************************Macro Declarations**********************************/

/******************************Macro Function Declarations******************************/

/***********************************Datatype Declarations*******************************/

/*********************************** ECU Externs *******************************/
extern led_t led_1;
extern led_t led_2;
extern led_t led_3;
extern led_t led_4;
extern led_t led_5;
extern led_t led_6;
extern led_t led_7;
extern led_t led_8;

extern keypad_t keypad1;
extern led_t key_led;

extern chr_lcd_8bit_t lcd_8bit;
extern chr_lcd_4bit_t lcd_4bit;
extern chr_lcd_8bit_t lcd_manar;

extern dc_motor_t dc_motor_1;
extern dc_motor_t dc_motor_2;

extern segment_t counter_segment;
extern pin_config_t counter_seg_enable_1;
extern pin_config_t counter_seg_enable_2;
extern pin_config_t big_seg_enable_1;
extern pin_config_t big_seg_enable_2;
extern pin_config_t big_seg_enable_3;
extern pin_config_t big_seg_enable_4;
extern pin_config_t big_seg_enable_5;
extern pin_config_t big_seg_enable_6;
extern segment_t big_seg;

/*********************************** MCAL Externs *******************************/

extern adc_config_t adc_1;

extern timer0_t timer0_timer;
extern timer0_t timer0_counter;
extern timer1_t timer1_timer;
extern timer1_t timer1_counter;
extern timer2_t timer2_timer;
extern timer3_t timer3_timer;
extern timer3_t timer3_counter;

extern ccp_t ccp1_compare;
extern ccp_t ccp1_capture;
extern ccp_t ccp1_pwm;
extern ccp_t ccp2_compare;
extern ccp_t ccp2_capture;
extern ccp_t ccp2_pwm;

extern eusart_t eusart_1;

extern SPI_Config spi_1;
extern mssp_i2c_t i2c_1;

/***********************************Function Declarations*******************************/

void application_initialize(void);

#endif	/* APPLICATION_H */

