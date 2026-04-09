/* 
 * File:   application.c
 * Author: Adham
 *
 * Created on July 6, 2024, 6:01 PM
 */

#include "application.h"

uint8 keypad_val;

int main() {
    Std_ReturnType retVal = E_NOT_OK; //fixed
    application_initialize(); //fixed
    while(1){
        retVal = keypad_get_value(&keypad1 , &keypad_val);
    }
    return (EXIT_SUCCESS);
}

void application_initialize(void){
    Std_ReturnType retVal = E_NOT_OK; //fixed
    ecu_layer_initialize(); //fixed 
    mcal_layer_initialize(); //fixed
}









/*---------------------------- Previous Codes ------------------------*/

//volatile uint32 tx_flag;
//volatile uint32 rx_flag;
//volatile uint8 rec_uart_data;
//
//void EUSART_FramingErrorDefaultHandler(void){
//    uint8 _data;
//    EUSART_ASYNC_Read_Byte_Non_Blocking(&eusart_1, &_data);
//}
//
//void EUSART_OverrunErrorDefaultHandler(void){
//    EUSART_ASYNC_RX_Restart(&eusart_1);
//}
//
//void EUSART_TxDefaultIneterruptHandler(void){
//    tx_flag++;
//}
//void EUSART_RxDefaultIneterruptHandler(void){
//    rx_flag++;
//    EUSART_ASYNC_Read_Byte_Non_Blocking(&eusart_1,&rec_uart_data);
//    switch(rec_uart_data){
//        case 'a' : 
//            led_turn_on(&led_1);
//            EUSART_ASYNC_Write_String_Blocking(&eusart_1 , "Led1_ON\r" , 8);
//            break;
//        case 'b' : 
//            led_turn_off(&led_1); 
//            EUSART_ASYNC_Write_String_Blocking(&eusart_1 , "Led1_OFF\r" , 9);
//            break;
//        case 'c' : 
//            led_turn_on(&led_2); 
//            EUSART_ASYNC_Write_String_Blocking(&eusart_1 , "Led2_ON\r" , 8);
//            break;
//        case 'd' : 
//            led_turn_off(&led_2); 
//            EUSART_ASYNC_Write_String_Blocking(&eusart_1 , "Led1_OFF\r" , 9);
//            break;
//        default : 
//            led_turn_off(&led_1);
//            led_turn_off(&led_2);
//            EUSART_ASYNC_Write_String_Blocking(&eusart_1 , "Both Off\r" , 8);
//    }
//}

/*****************************************/

//        uint8 rec_value;
//        retVal = EUSART_ASYNC_Write_Byte_Blocking(&eusart_1, 'o');
//        __delay_ms(1000);
//        retVal = EUSART_ASYNC_Write_Byte_Blocking(&eusart_1, 'f');
//        __delay_ms(1000);
//        retVal = EUSART_ASYNC_Read_Byte_Blocking(&eusart_1,&rec_value);
//            if('o' == rec_value){
//                retVal = led_turn_on(&led_1);
//                retVal = EUSART_ASYNC_Write_String_Blocking(&eusart_1 , "Led On\r" , 7);        
//            }
//            else if('f' == rec_value){
//                retVal = led_turn_off(&led_1);
//                retVal = EUSART_ASYNC_Write_String_Blocking(&eusart_1 , "Led Off\r" , 8); 
//            }

/**********************************/

//timer3_t timer3_obj;
//ccp_t ccp_obj;
//
//volatile uint8 CCP1_Second_Copture_Flag = 0;
//uint16 Second_Copture = 0;
//volatile uint32 Timer3_OverFlow = 0;
//uint32 Total_Period_MicroSecond = 0;
//uint32 Freq = 0;
//
//void CCP1_DefaultInterruptHandler(void){
//    Std_ReturnType retVal = E_NOT_OK;
//    static uint8 CCP1_Interrupt_Flag = 0;
//    
//    CCP1_Interrupt_Flag++;
//    CCP1_Second_Copture_Flag++;
//    if(CCP1_Interrupt_Flag == 1){
//        retVal = Timer3_Write_value(&timer3_obj, 0);
//    }
//    else if(CCP1_Interrupt_Flag == 2){
//        Timer3_OverFlow = 0;
//        CCP1_Interrupt_Flag = 0;
//        retVal = CCP_Capture_Mode_Read_Value(&Second_Copture);
//    }
//}
//
//void Timer3_DefaultInterruptHandler(void){
//    Timer3_OverFlow++;
//}

/*main*/

//ccp_obj.CCP1_InterruptHandler = CCP1_DefaultInterruptHandler;
//    ccp_obj.ccp_inst = CCP1_INST;
//    ccp_obj.ccp_mode = CCP_CAPTURE_MODE_SELECTED;
//    ccp_obj.ccp_mode_variant = CCP_CAPTURE_MODE_1_RISING_EDGE;
//    ccp_obj.ccp_capture_timer = CCP1_CCP2_TIMER3;
//    ccp_obj.ccp_pin.port = PORTC_INDEX;
//    ccp_obj.ccp_pin.pin = GPIO_PIN2;
//    ccp_obj.ccp_pin.direction = GPIO_DIRECTION_INPUT;
//    retVal = CCP_Init(&ccp_obj);
//    
//    timer3_obj.TMR3_InterruptHandler = Timer3_DefaultInterruptHandler;
//    timer3_obj.timer3_mode = TIMER3_TIMER_MODE;
//    timer3_obj.priority = INTERRUPT_LOW_PRIORITY;
//    timer3_obj.timer3_prescaler = TIMER3_PRESCALER_DIV_BY_1;
//    timer3_obj.timer3_preload_value = 0;
//    timer3_obj.timer1_reg_wr_mode = TIMER3_RW_REG_8BIT_MODE;
//    retVal = Timer3_Init(&timer3_obj);
//
//    while(1){
//       if(CCP1_Second_Copture_Flag == 2){
//            Total_Period_MicroSecond = (Timer3_OverFlow * 65536) + Second_Copture;
//            Freq = (uint32)(1 / (Total_Period_MicroSecond / 1000000.0));
//            CCP1_Second_Copture_Flag = 0;
//        }
//    }

/***************************/




/***************************/

//void TIMER2_DefaultIneterruptHandler(void){
//    
//}
//
//void TIMER3_DefaultIneterruptHandler(void){
//    
//}

/***************************/

//void TIMER1_DefaultIneterruptHandler(void){
//    
//}

/************************/

//   void TIMER0_DefaultIneterruptHandler(void){}
//uint16 counter0_value = 0;
//while(1){
//        retVal = Timer0_Read_value(&timer0_counter , &counter0_value);
//    }

/********************/

 //uint16 lm35_res_1, lm35_res_2, lm35_res1_cel, lm35_res2_cel;
//    uint8 lm35_res_1_txt[7], lm35_res_2_txt[7];
//    uint8 adc_req;
//    
//    retVal = lcd_8bit_send_string_pos(&lcd_8bit, 1, 7, "LM 35 Test");
//    retVal = lcd_8bit_send_string_pos(&lcd_8bit, 2, 1, "Temp1: ");
//    retVal = lcd_8bit_send_string_pos(&lcd_8bit, 3, 1, "Temp2: ");
//    
//    while(1){
//        if(0 == adc_req){
//            retVal = ADC_Start_Conversion_Interrupt(&adc_1 , ADC_CHANNEL_AN0);
//        }
//        else if(1 == adc_req){
//            retVal = ADC_Start_Conversion_Interrupt(&adc_1 , ADC_CHANNEL_AN1);
//        }
//        else if(2 == adc_req){
//            retVal = ADC_Start_Conversion_Interrupt(&adc_1 , ADC_CHANNEL_AN2);
//        }
//        else if(3 == adc_req){
//            retVal = ADC_Start_Conversion_Interrupt(&adc_1 , ADC_CHANNEL_AN3);
//        }
//        
//        lm35_res1_cel = lm35_res_1 * 4.88f;
//        lm35_res2_cel = lm35_res_2 * 4.88f;
//        
//        lm35_res1_cel /= 10;
//        lm35_res2_cel /= 10;
//        
//        retVal = convert_uint16_to_string(lm35_res1_cel,lm35_res_1_txt);
//        retVal = convert_uint16_to_string(lm35_res2_cel,lm35_res_2_txt);
//        
//        retVal = lcd_8bit_send_string_pos(&lcd_8bit, 2, 8, lm35_res_1_txt);
//        retVal = lcd_8bit_send_string_pos(&lcd_8bit, 3, 8, lm35_res_2_txt);
//        
//        if(lm35_res1_cel > 20){
//            retVal = dc_motor_move_right(&dc_motor_1);
//        }
//        else{
//            retVal = dc_motor_stop(&dc_motor_1);
//        }
//        
//        if(lm35_res2_cel > 30){
//            retVal = dc_motor_move_right(&dc_motor_2);
//        }
//        else{
//            retVal = dc_motor_stop(&dc_motor_2);
//        }
//    }
//    void ADC_DefaultInterruptHandler(void);
//void ADC_DefaultInterruptHandler(void){
//    if(0 == adc_req){
//        ADC_Get_Conversion_Result(&adc_1 , &lm35_res_1);
//        adc_req = 1;
//    }
//    else if(1 == adc_req){
//        ADC_Get_Conversion_Result(&adc_1 , &lm35_res_2);
//        adc_req = 0;
//    }
//}
/*--------*/
//    const uint8 heart_custom_char[] = {0x00,0x0A,0x1F,0x1F,0x0E,0x04,0x00,0x00};
//    
//    uint32 counter = 0;
//    uint32 counter_txt[11];
//    retVal = lcd_8bit_send_string_pos(&lcd_8bit , 1 , 1 , "Days together : ");
//    
//    retVal = lcd_4bit_send_custom_char(&lcd_4bit , 3, 4, heart_custom_char , 0);
//    retVal = lcd_4bit_send_custom_char(&lcd_4bit , 3, 5, heart_custom_char , 0);
//    while(1){
//        retVal = convert_uint32_to_string(counter , counter_txt);
//        retVal = lcd_8bit_send_string_pos(&lcd_8bit , 1 , 17 , counter_txt);
//        if(counter<=381){
//        counter++;
//        }
//        __delay_ms(20);
//        if(counter == 382){
//            __delay_ms(250);
//            retVal = lcd_8bit_send_string_pos(&lcd_8bit , 2 , 1 , "Till the very end..");
//            __delay_ms(250);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 4, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 5, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 6, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 7, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 8, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 9, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 10, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 11, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 12, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 13, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 14, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 15, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 16, heart_custom_char , 0);
//            retVal = lcd_8bit_send_custom_char(&lcd_8bit , 3, 17, heart_custom_char , 0);
//            __delay_ms(250);
//            retVal = lcd_8bit_send_string_pos(&lcd_8bit , 4 , 1 , "Adham & Manar = Love");
//            
//        }
//    }
    
    
//    while(1){
//        for(uint8 counter=5 ; counter<=8 ; ++counter){
//            retVal = lcd_4bit_send_string_pos(&lcd_4bit , 2 , counter , "adham");
//            __delay_ms(200);
//            retVal = lcd_4bit_send_char_data_pos(&lcd_4bit , 2 , counter , ' ');
//        }
//        retVal = lcd_4bit_send_string_pos(&lcd_4bit , 2 , 5 , "         "); /*number of spaces = string + shift*/
//        
//        for(uint8 counter=8 ; counter>=5 ; --counter){
//            retVal = lcd_4bit_send_string_pos(&lcd_4bit , 2 , counter , "adham");
//            __delay_ms(200);
//            retVal = lcd_4bit_send_char_data_pos(&lcd_4bit , 2 , counter+4 , ' ');
//        }
//    } 
    
    
//    retVal = lcd_4bit_send_char_data(&lcd_8bit , 'a');
    
//    uint8 keypad_value = 0;
//    while(1){
//        retVal = keypad_get_value(&keypad1 , &keypad_value);
//        if('7' == keypad_value){
//            retVal = led_turn_on(&key_led);
//        }
//        else{
//            retVal = led_turn_off(&key_led);
//        }  
//    }

    
    
    
    
//    while(1){
//    for(uint8 counter=0 ; counter<50 ; counter++){
//    retVal = seven_segment_write_number(&big_seg , ((uint8)(hours/10))); 
//    retVal = gpio_pin_write_logic(&big_seg_enable_1 , GPIO_HIGH);
//    __delay_us(3333);
//    retVal = gpio_pin_write_logic(&big_seg_enable_1 , GPIO_LOW);
//    retVal = seven_segment_write_number(&big_seg , ((uint8)(hours%10))); 
//    retVal = gpio_pin_write_logic(&big_seg_enable_2 , GPIO_HIGH);
//    __delay_us(3333);
//    retVal = gpio_pin_write_logic(&big_seg_enable_2 , GPIO_LOW);
//    retVal = seven_segment_write_number(&big_seg , ((uint8)(minutes/10))); 
//    retVal = gpio_pin_write_logic(&big_seg_enable_3 , GPIO_HIGH);
//    __delay_us(3333);
//    retVal = gpio_pin_write_logic(&big_seg_enable_3 , GPIO_LOW);
//    retVal = seven_segment_write_number(&big_seg , ((uint8)(minutes%10))); 
//    retVal = gpio_pin_write_logic(&big_seg_enable_4 , GPIO_HIGH);
//    __delay_us(3333);
//    retVal = gpio_pin_write_logic(&big_seg_enable_4 , GPIO_LOW);
//    retVal = seven_segment_write_number(&big_seg , ((uint8)(seconds/10))); 
//    retVal = gpio_pin_write_logic(&big_seg_enable_5 , GPIO_HIGH);
//    __delay_us(3333);
//    retVal = gpio_pin_write_logic(&big_seg_enable_5 , GPIO_LOW);
//    retVal = seven_segment_write_number(&big_seg , ((uint8)(seconds%10))); 
//    retVal = gpio_pin_write_logic(&big_seg_enable_6 , GPIO_HIGH);
//    __delay_us(3333);
//    retVal = gpio_pin_write_logic(&big_seg_enable_6 , GPIO_LOW);
//    }
//    seconds++;
//    if(seconds == 60){
//        minutes++;
//        seconds = 0;
//    }
//    if(minutes == 60){
//        hours++;
//        minutes = 0;
//    }
//    if(hours == 24){
//        hours++;
//        hours = 0;
//    }
//}
    
//    while(1){
//        for(uint8 counter = 0 ; counter <= 50 ; counter++){
//            retVal = seven_segment_write_number(&counter_segment , (uint8)(number%10));
//            retVal = gpio_pin_write_logic(&counter_seg_enable_1 , GPIO_HIGH);
//            __delay_ms(10);
//            retVal = gpio_pin_write_logic(&counter_seg_enable_1 , GPIO_LOW);
//            retVal = seven_segment_write_number(&counter_segment , (uint8)(number/10));
//            retVal = gpio_pin_write_logic(&counter_seg_enable_2 , GPIO_HIGH);
//            __delay_ms(10);
//            retVal = gpio_pin_write_logic(&counter_seg_enable_2 , GPIO_LOW);
//        }
//        number++;
//    }
    

    
//    uint8 number=0 , number_bcd=0;
    
//    while(1){
//        for(number=0 ; number<100 ; number++){
//            number_bcd = (((uint8)number/10)) | (((uint8)number%10)<<4);
//            retVal = gpio_port_write_logic(PORTB_INDEX , number_bcd);
//            __delay_ms(250);
//        }
//    }
    
//    while(1){
//        for(uint8 i=0 ; i<10 ; i++){
//            retVal = gpio_port_write_logic(PORTB_INDEX , seg_common_anode_values[i]);
//            __delay_ms(1000);
//        }
//    }
//    /*-------------------------------------------------------*/
//    while(1){
//        retVal = dc_motor_move_right(&dc_motor_1);
//        retVal = dc_motor_move_right(&dc_motor_2);
//        __delay_ms(3000);
//        retVal = dc_motor_move_left(&dc_motor_1);
//        retVal = dc_motor_move_left(&dc_motor_2);
//        __delay_ms(3000);
//        retVal = dc_motor_stop(&dc_motor_1);
//        retVal = dc_motor_stop(&dc_motor_2);
//        __delay_ms(3000);
//        retVal = dc_motor_move_right(&dc_motor_1);
//        retVal = dc_motor_move_right(&dc_motor_2);
//        __delay_ms(3000);
//        retVal = dc_motor_stop(&dc_motor_1);
//        retVal = dc_motor_stop(&dc_motor_2);
//        __delay_ms(3000);
//        retVal = dc_motor_move_left(&dc_motor_1);
//        retVal = dc_motor_move_left(&dc_motor_2);
//        __delay_ms(3000);
//    }
    
//    /*------------------------------------------------------------------*/
    
//    while(1){
//        retVal = relay_turn_on(&relay_1);
//        __delay_ms(1000);
//        retVal = relay_turn_off(&relay_1);
//        __delay_ms(1000);
//    }
//    while(1){
//        retVal = button_read_state(&btn_high, &btn_high_status);
//        retVal = button_read_state(&btn_low, &btn_low_status);
//        
//        if(BUTTON_PRESSED == btn_high_status)
//        {
//           retVal = led_turn_on(&led_high);
//        }
//        else{
//            retVal = led_turn_off(&led_high);
//        }
//        if(BUTTON_PRESSED == btn_low_status){
//           retVal = led_turn_off(&led_low);
//        }
//        else{
//            retVal = led_turn_on(&led_low);
//        }
//    }
    
//    /*------------------------------------------------------------------*/
    
//    while(1)
//    {
//        led_toggle(&led_1);
//        led_toggle(&led_2);
//        led_toggle(&led_3);
//        led_toggle(&led_4);
//        __delay_ms(250);
//        
//    }
    
    
//    while(1){
//        
//        retVal = gpio_port_toggle_logic(PORTC_INDEX);
//        __delay_ms(250);
//        retVal = gpio_pin_toggle_logic(&led_1);
//        __delay_ms(250);
//        retVal = gpio_pin_read_logic(&btn_1, &btn1_status);
//        if(btn1_status == GPIO_HIGH){
//            gpio_pin_write_logic(&led_1 , GPIO_HIGH);
//        }else{
//            gpio_pin_write_logic(&led_1 , GPIO_LOW);
//        }
    
    
    
    
//    /*------------------------------------------------------------------*/
    
    
    
      
//    ADHAM_TRISC = 0x00;
//    
//    while(1)
//    {
//    LATC_SELF_REG->LATC_REGISTER = 0xAA;
//    }
//    
    
    
//    while(1)
//    { 
//       __delay_ms(1000);
//       ADHAM_LATC |= (_LATC_LC7_MASK);
//       __delay_ms(1000);
//       ADHAM_LATC &= ~(_LATC_LC7_MASK);
//       __delay_ms(1000);
//       ADHAM_LATC |= (_LATC_LC6_MASK | _LATC_LC5_MASK |_LATC_LC4_MASK | _LATC_LC3_MASK);
//       __delay_ms(1000);
//       ADHAM_LATC &= ~(_LATC_LC6_MASK | _LATC_LC5_MASK |_LATC_LC4_MASK | _LATC_LC3_MASK);
//       __delay_ms(1000);
//       ADHAM_LATC |= (_LATC_LC2_MASK | _LATC_LC1_MASK |_LATC_LC0_MASK);
//       __delay_ms(1000);
//       ADHAM_LATC &= ~(_LATC_LC2_MASK | _LATC_LC1_MASK |_LATC_LC0_MASK);
//       __delay_ms(1000);
//    }