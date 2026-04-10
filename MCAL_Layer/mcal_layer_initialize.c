/* 
 * File:   mcal_layer_initialize.c
 * Author: Adham
 *
 * Created on August 18, 2024, 3:19 PM
 */

#include "mcal_layer_initialize.h"



extern void TIMER0_IneterruptHandler(void);
extern void INT0_PedBtnIneterruptHandler(void);




timer0_t timer0_timer = {
    .TMR0_InterruptHandler = TIMER0_IneterruptHandler,
    .prescaler_enable = TIMER0_PRESCALER_ENABLE_CFG,
    .prescaler_value = TIMER0_PRESCALER_DIV_BY_32,
    .timer0_mode = TIMER0_TIMER_MODE,
    .timer0_preload_value = 3036,
    .timer0_register_size = TIMER0_16_BIT_REGISTER_MODE
};

interrupt_INTx_t Ped_btn = {
    .EXT_InterruptHandler = INT0_PedBtnIneterruptHandler,
    .source = INTERRUPT_EXTERNAL_INT0,
    .edge = INTERRUPT_RISING_EDGE,
    .mcu_pin.port = PORTB_INDEX,
    .mcu_pin.pin = GPIO_PIN0,
    .mcu_pin.direction = GPIO_DIRECTION_INPUT,
    .mcu_pin.logic = GPIO_LOW
};



void mcal_layer_initialize(void){
    Std_ReturnType retVal = E_NOT_OK; //fixed
    
    retVal = Timer0_Init(&timer0_timer);
    retVal = Interrupt_INTx_Init(&Ped_btn);
    
    ADCON1 = 0x0F;
    
}