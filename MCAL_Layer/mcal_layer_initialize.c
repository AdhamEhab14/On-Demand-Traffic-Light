/* 
 * File:   mcal_layer_initialize.c
 * Author: Adham
 *
 * Created on August 18, 2024, 3:19 PM
 */

#include "mcal_layer_initialize.h"



extern void TIMER0_DefaultIneterruptHandler(void);


//timer0_t timer0_timer = {
//    .TMR0_InterruptHandler = TIMER0_DefaultIneterruptHandler,
//    .prescaler_enable = TIMER0_PRESCALER_ENABLE_CFG,
//    .prescaler_value = TIMER0_PRESCALER_DIV_BY_8,
//    .timer0_mode = TIMER0_TIMER_MODE,
//    .timer0_preload_value = 3036,
//    .timer0_register_size = TIMER0_16_BIT_REGISTER_MODE
//};
//



void mcal_layer_initialize(void){
    Std_ReturnType retVal = E_NOT_OK; //fixed
    
//    retVal = MSSP_I2C_Init(&i2c_1);
    
//    retVal = EUSART_ASYNC_Init(&eusart_1);
    
//    retVal = CCP_Init(&ccp_obj);
    
//    retVal = Timer3_Init(&timer3_timer);
//    retVal = Timer3_Init(&timer3_counter);
    
//    retVal = Timer2_Init(&timer2_timer);
    
//    retVal = Timer1_Init(&timer1_timer);
//    retVal = Timer1_Init(&timer1_counter);
    
//    retVal = Timer0_Init(&timer0_counter);
//    retVal = Timer0_Init(&timer0_timer);
    
//    retVal = ADC_Init(&adc_1);
}