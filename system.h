//
//System Level other non-peripheral microcontroller initialization                                  */
//


//Microcontroller MIPs (FCY)
#define SYS_FREQ        8000000L
#define FCY             SYS_FREQ/4

void ConfigureOscillator(void); /* Handles clock switching/osc initialization */
