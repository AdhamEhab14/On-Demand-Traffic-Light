/* 
 * File:   mcal_layer_initialize.c
 * Author: Adham
 *
 * Created on August 18, 2024, 3:19 PM
 */

#include "mcal_layer_initialize.h"


extern void ADC_DefaultInterruptHandler(void);
extern void TIMER0_DefaultIneterruptHandler(void);
extern void TIMER1_DefaultIneterruptHandler(void);
extern void TIMER2_DefaultIneterruptHandler(void);
extern void TIMER3_DefaultIneterruptHandler(void);
extern void CCP1_DefaultIneterruptHandler(void);
extern void CCP2_DefaultIneterruptHandler(void);
extern void EUSART_TxDefaultIneterruptHandler(void);
extern void EUSART_RxDefaultIneterruptHandler(void);
extern void EUSART_FramingErrorDefaultHandler(void);
extern void EUSART_OverrunErrorDefaultHandler(void);
extern void I2C_DefaultIneterruptHandler(void);
extern void I2C_Report_Write_Collision_IneterruptHandler(void);
extern void I2C_Report_Receive_Overflow_IneterruptHandler(void);


//mssp_i2c_t i2c_1 = {
//    .I2C_DefaultInterruptHandler = I2C_DefaultIneterruptHandler,
//    .I2C_Report_Receive_Overflow = NULL,
//    .I2C_Report_Write_Collision = NULL,
//    .i2c_cfg.i2c_mode = I2C_MSSP_SLAVE_MODE,
//    .i2c_cfg.i2c_SMBus_control = I2C_SMBus_DISABLE,
//    .i2c_cfg.i2c_slew_rate = I2C_SLEW_RATE_DISABLE,
//    .i2c_cfg.i2c_general_call = I2C_GENERAL_CALL_DISABLE,
//    .i2c_cfg.i2c_mode_cfg = I2C_SLAVE_MODE_7BIT_ADDRESS,
//    .i2c_cfg.i2c_slave_address = 0x62
//};

//SPI_Config spi_1 = {
//    .MSSP_SPI_InterruptHandler = SPI_DefaultIneterruptHandler,
//    .priority = INTERRUPT_HIGH_PRIORITY,
//    .spi_mode = SPI_SLAVE_SS_DISABLE,
//    .spi_config.ClockPolarity = SPI_IDLE_STATE_HIGH_LEVEL,
//    .spi_config.ClockSelect = SPI_TRANSMIT_ACTIVE_TO_IDLE,
//    .spi_config.SampleSelect = SPI_DATA_SAMPLE_MIDDLE
//};


//eusart_t eusart_1 = {
//    .EUSART_TxInterruptHandler = EUSART_TxDefaultIneterruptHandler,
//    .EUSART_RxInterruptHandler = EUSART_RxDefaultIneterruptHandler,
//    .EUSART_FramingErrorHandler = EUSART_FramingErrorDefaultHandler,
//    .EUSART_OverrunErrorHandler = EUSART_OverrunErrorDefaultHandler,
//    .baudrate = 9600,
//    .baudrate_config = BAUDRATE_ASYN_8BIT_lOW_SPEED,
//    .eusart_tx_cfg.eusart_tx_enable = EUSART_ASYNCHRONOUS_TX_ENABLE,
//    .eusart_tx_cfg.eusart_tx_interrupt_enable = EUSART_ASYNCHRONOUS_INTERRUPT_TX_ENABLE,
//    .eusart_tx_cfg.eusart_tx_9bit_enable = EUSART_ASYNCHRONOUS_9Bit_TX_DISABLE,
//    .eusart_rx_cfg.eusart_rx_enable = EUSART_ASYNCHRONOUS_RX_ENABLE,
//    .eusart_rx_cfg.eusart_rx_interrupt_enable = EUSART_ASYNCHRONOUS_INTERRUPT_RX_ENABLE,
//    .eusart_rx_cfg.eusart_rx_9bit_enable = EUSART_ASYNCHRONOUS_9Bit_RX_DISABLE,
//};

//ccp_t ccp2_capture = {
//    .ccp_inst = CCP2_INST,
//    .CCP1_InterruptHandler = NULL,
//    .ccp_mode = CCP_CAPTURE_MODE_SELECTED,
//    .ccp_mode_variant = CCP_CAPTURE_MODE_1_RISING_EDGE,
//    .ccp_capture_timer = CCP1_CCP2_TIMER3,
//    .ccp_pin.port = PORTC_INDEX,
//    .ccp_pin.pin = GPIO_PIN1,
//    .ccp_pin.direction = GPIO_DIRECTION_INPUT,
//};

//ccp_t ccp2_pwm = {
//    .ccp_inst = CCP2_INST,
//    .CCP1_InterruptHandler = NULL,
//    .CCP1_priority = INTERRUPT_LOW_PRIORITY,
//    .ccp_mode = CCP_PWM_MODE_SELECTED,
//    .PWM_Frequency = 20000,
//    .timer2_prescaler_value = CCP_TIMER2_PRESCALER_DIV_BY_1,
//    .timer2_postscaler_value = CCP_TIMER2_POSTSCALER_DIV_BY_1,
//    .ccp_pin.port = PORTC_INDEX,
//    .ccp_pin.pin = GPIO_PIN1,
//    .ccp_pin.direction = GPIO_DIRECTION_OUTPUT,
//};

//ccp_t ccp2_compare = {
//    .ccp_inst = CCP2_INST,
//    .CCP1_InterruptHandler = NULL,
//    .CCP1_priority = INTERRUPT_LOW_PRIORITY,
//    .ccp_mode = CCP_COMPARE_MODE_SELECTED,
//    .ccp_mode_variant = CCP_COMPARE_MODE_TOGGLE_ON_MATCH,
//    .ccp_capture_timer = CCP1_CCP2_TIMER3,
//    .ccp_pin.port = PORTC_INDEX,
//    .ccp_pin.pin = GPIO_PIN1,
//    .ccp_pin.direction = GPIO_DIRECTION_OUTPUT,
//};

//ccp_t ccp1_capture = {
//    .ccp_inst = CCP1_INST,
//    .CCP1_InterruptHandler = NULL,
//    .ccp_mode = CCP_CAPTURE_MODE_SELECTED,
//    .ccp_mode_variant = CCP_CAPTURE_MODE_1_RISING_EDGE,
//    .ccp_capture_timer = CCP1_CCP2_TIMER3,
//    .ccp_pin.port = PORTC_INDEX,
//    .ccp_pin.pin = GPIO_PIN2,
//    .ccp_pin.direction = GPIO_DIRECTION_INPUT,
//};

//ccp_t ccp1_pwm = {
//    .ccp_inst = CCP1_INST,
//    .CCP1_InterruptHandler = NULL,
//    .CCP1_priority = INTERRUPT_LOW_PRIORITY,
//    .ccp_mode = CCP_PWM_MODE_SELECTED,
//    .PWM_Frequency = 20000,
//    .timer2_prescaler_value = CCP_TIMER2_PRESCALER_DIV_BY_1,
//    .timer2_postscaler_value = CCP_TIMER2_POSTSCALER_DIV_BY_1,
//    .ccp_pin.port = PORTC_INDEX,
//    .ccp_pin.pin = GPIO_PIN2,
//    .ccp_pin.direction = GPIO_DIRECTION_OUTPUT,
//};

//ccp_t ccp1_compare = {
//    .ccp_inst = CCP1_INST,
//    .CCP1_InterruptHandler = NULL,
//    .CCP1_priority = INTERRUPT_LOW_PRIORITY,
//    .ccp_mode = CCP_COMPARE_MODE_SELECTED,
//    .ccp_mode_variant = CCP_COMPARE_MODE_TOGGLE_ON_MATCH,
//    .ccp_capture_timer = CCP1_CCP2_TIMER3,
//    .ccp_pin.port = PORTC_INDEX,
//    .ccp_pin.pin = GPIO_PIN2,
//    .ccp_pin.direction = GPIO_DIRECTION_OUTPUT,
//};

//timer3_t timer3_counter = {
//    .TMR3_InterruptHandler = TIMER3_DefaultIneterruptHandler,
//    .priority = INTERRUPT_LOW_PRIORITY,
//    .timer3_mode = TIMER3_COUNTER_MODE,
//    .timer3_counter_mode = TIMER3_SYNC_COUNTER_MODE,
//    .timer3_preload_value = 0,
//    .timer1_reg_wr_mode = TIMER3_RW_REG_16BIT_MODE,
//    .timer3_prescaler = TIMER3_PRESCALER_DIV_BY_1
//};

//timer3_t timer3_timer = {
//    .TMR3_InterruptHandler = NULL,
//    .priority = INTERRUPT_LOW_PRIORITY,
//    .timer3_mode = TIMER3_TIMER_MODE,
//    .timer3_preload_value = 0,
//    .timer3_prescaler = TIMER3_PRESCALER_DIV_BY_1,
//    .timer1_reg_wr_mode = TIMER3_RW_REG_16BIT_MODE
//};

//timer2_t timer2_timer = {
//    .TMR2_InterruptHandler = NULL,
//    .priority = INTERRUPT_HIGH_PRIORITY,
//    .timer2_prescaler = TIMER2_PRESCALER_DIV_BY_1,
//    .timer2_postscaler = TIMER2_POSTSCALER_DIV_BY_1,
//    .timer2_preload_value = 0
//};

//timer1_t timer1_timer = {
//        .TMR1_InterruptHandler = TIMER1_DefaultIneterruptHandler,
//        .timer1_mode = TIMER1_TIMER_MODE,
//        .prescaler_value = TIMER1_PRESCALER_DIV_BY_4,
//        .priority = INTERRUPT_LOW_PRIORITY,
//        .timer1_preload_value = 15536,
//        .timer1_reg_wr_mode = TIMER1_RW_REG_16BIT_MODE
//};  
//
//timer1_t timer1_counter = {
//        .TMR1_InterruptHandler = TIMER1_DefaultIneterruptHandler,
//        .timer1_mode = TIMER1_COUNTER_MODE,
//        .prescaler_value = TIMER1_PRESCALER_DIV_BY_1,
//        .priority = INTERRUPT_LOW_PRIORITY,
//        .timer1_preload_value = 0,
//        .timer1_reg_wr_mode = TIMER1_RW_REG_16BIT_MODE,
//        .timer1_counter_mode = TIMER1_SYNC_COUNTER_MODE
//};  

//timer0_t timer0_timer = {
//    .TMR0_InterruptHandler = TIMER0_DefaultIneterruptHandler,
//    .prescaler_enable = TIMER0_PRESCALER_ENABLE_CFG,
//    .prescaler_value = TIMER0_PRESCALER_DIV_BY_8,
//    .timer0_mode = TIMER0_TIMER_MODE,
//    .timer0_preload_value = 3036,
//    .timer0_register_size = TIMER0_16_BIT_REGISTER_MODE
//};
//
//timer0_t timer0_counter = {
//    .TMR0_InterruptHandler = TIMER0_DefaultIneterruptHandler,
//    .prescaler_enable = TIMER0_PRESCALER_DISABLE_CFG,
//    .timer0_mode = TIMER0_COUNTER_MODE,
//    .timer0_counter_edge = TIMER0_RISING_EDGE_CFG,
//    .timer0_register_size = TIMER0_16_BIT_REGISTER_MODE
//};


//adc_config_t adc_1 = {
//    .ADC_InterruptHandler = ADC_DefaultInterruptHandler,
//    .acquisition_time = ADC_12_TAD,
//    .conversion_clock = ADC_CONVERSION_CLOCK_FOSC_DIV_16,
//    .adc_channel = ADC_CHANNEL_AN0,
//    .result_format = ADC_RIGHT_FORMAT,
//    .voltage_reference = ADC_VOLTAGE_REF_DISABLE
//};



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