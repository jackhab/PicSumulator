#include <xc.h>   
#include <stdint.h>
#include <stdbool.h>
#include "user.h"


void putch(unsigned char data) {
    while (!PIR1bits.TXIF)            // wait until the transmitter is ready
        continue;
    TXREG = data;                     // send one character
}

void InitUart(void) {
    TXSTAbits.TXEN = 1;               // enable transmitter
    RCSTAbits.SPEN = 1;               // enable serial port
}

void InitApp(void)
{
    InitUart();
    /* Setup analog functionality and port direction */

    /* Initialize peripherals */

    /* Configure the IPEN bit (1=on) in RCON to turn on/off int priorities */

    /* Enable interrupts */
}

