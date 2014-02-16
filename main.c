
#include <stdlib.h>
#include "io430.h"
#include "CT_Config.h"
#include "CT_Circle.h"

int main( void )
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;
  
  // Setup
  CT_Circle_t* ctc = CT_Circle_Create();

  CT_Circle_fillPercent( ctc, 33 );
  uint8_t i = ctc->fill;
  
  return 0;
}
