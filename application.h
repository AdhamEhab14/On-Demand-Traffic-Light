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
extern led_t Led_T_red;
extern led_t Led_T_yellow;
extern led_t Led_T_green;
extern led_t Led_P_red;
extern led_t Led_P_green;

extern segment_t counter_segment;

extern pin_config_t counter_seg_enable_1;
extern pin_config_t counter_seg_enable_2;

extern pin_config_t big_seg_enable_1;
extern pin_config_t big_seg_enable_2;
extern pin_config_t big_seg_enable_3;
extern pin_config_t big_seg_enable_4;
extern pin_config_t big_seg_enable_5;
extern pin_config_t big_seg_enable_6;

/*********************************** MCAL Externs *******************************/

extern timer0_t timer0_timer;

/***********************************Function Declarations*******************************/

void application_initialize(void);

#endif	/* APPLICATION_H */

