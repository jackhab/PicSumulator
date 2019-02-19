//
//System Level other non-peripheral microcontroller initialization                                  */
//


//Microcontroller MIPs (FCY)
#define SYS_FREQ        8000000L
#define FCY             SYS_FREQ/4

//needed for __delay functions
#define _XTAL_FREQ      SYS_FREQ

void ConfigureOscillator(void);
