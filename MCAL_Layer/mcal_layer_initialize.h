/* 
 * File:   mcal_layer_initialize.h
 * Author: Adham
 *
 * Created on August 18, 2024, 3:19 PM
 */

#ifndef MCAL_LAYER_INITIALIZE_H
#define	MCAL_LAYER_INITIALIZE_H

/***************************************Includes***************************************/

#include "Interrupt/mcal_external_interrupt.h"
#include "Interrupt/mcal_internal_interrupt.h"
#include "EEPROM/hal_eeprom.h"
#include "ADC/hal_adc.h"
#include "Timer0/hal_timer0.h"
#include "Timer1/hal_timer1.h"
#include "Timer2/hal_timer2.h"
#include "Timer3/hal_timer3.h"
#include "CCP/hal_ccp.h"
#include "EUSART/hal_eusart.h"
#include "SPI/hal_spi.h"
#include "I2C/hal_i2c.h"

/***********************************Macro Declarations**********************************/

/******************************Macro Function Declarations******************************/

/***********************************Datatype Declarations*******************************/

/***********************************Function Declarations*******************************/

void mcal_layer_initialize(void);

#endif	/* MCAL_LAYER_INITIALIZE_H */

