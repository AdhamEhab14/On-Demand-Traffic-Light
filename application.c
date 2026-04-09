/* 
 * File:   application.c
 * Author: Adham
 *
 * Created on July 6, 2024, 6:01 PM
 */

#include "application.h"


int main() {
    Std_ReturnType retVal = E_NOT_OK; //fixed
    application_initialize(); //fixed
    while(1){
        
    }
    return (EXIT_SUCCESS);
}

void application_initialize(void){
    Std_ReturnType retVal = E_NOT_OK; //fixed
    ecu_layer_initialize(); //fixed 
    mcal_layer_initialize(); //fixed
}



