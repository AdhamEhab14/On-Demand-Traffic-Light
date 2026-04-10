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

#define TRAFFIC_MODE 0
#define PEDESTRIAN_MODE 1

#define GREEN_MAX_TIME  10
#define YELLOW_MAX_TIME 3
#define RED_MAX_TIME    10


/*********************************** MCAL Externs & Enums *******************************/

extern led_t Led_T_green;
extern led_t Led_T_red;
extern led_t Led_T_yellow;

extern led_t Led_P_red;
extern led_t Led_P_green;

extern segment_t counter_segment;

extern pin_config_t counter_seg_enable_1;
extern pin_config_t counter_seg_enable_2;

extern timer0_t timer0_timer;

typedef enum {
    STATE_GREEN,
    STATE_YELLOW,
    STATE_RED
} Traffic_State_t;

/***********************************Function Declarations*******************************/

void application_initialize(void);
void Traffic_Time_Display(uint8 time);
void Update_Traffic_LEDs(Traffic_State_t state);


#endif	/* APPLICATION_H */

