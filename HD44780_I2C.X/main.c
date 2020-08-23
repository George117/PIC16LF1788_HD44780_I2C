/*
 * File:   main.c
 * Author: georg
 *
 * Created on August 8, 2020, 9:48 PM
 */

#include <xc.h>
#include "bit_settings.h"
#include "config.h"
#include "i2c_display.h"

void main(void) 
{
    IO_First_Init();
    Configure_Clock();    

    I2C_Master_Init(100000);
     
    __delay_ms(100);
    Lcd_Init();
    Lcd_Clear();
    Cursor_Off();
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("Test");
    
    while(1){
        LATCbits.LATC7 = 0;
        __delay_us(1);
        LATCbits.LATC7 = 1;
        __delay_us(1);
    }
    
    
    
}
