#include <xc.h>        /* XC8 General Include File */
#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */
#include <stdio.h>
#include "system.h"        /* System funct/params, like osc/peripheral config */
#include "user.h"          /* User funct/params, such as InitApp */





void main(void)
{
    ConfigureOscillator();

    InitApp();
    
    printf("HELLO %sn\n", __TIME__);
    while(1)
    {

    }

}

