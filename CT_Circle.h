#ifndef CT_Circle_H
#define CT_Circle_H

#include <stdint.h>
#include "CT_Config.h"

typedef struct CT_Circle {
  uint8_t segments;
  uint8_t fill;
} CT_Circle_t;


CT_Circle_t* CT_Circle_Create(void);
void CT_Circle_Init( CT_Circle_t* const me );
void CT_Circle_Destroy( CT_Circle_t* const me );
bool CT_Circle_fillPercent( CT_Circle_t* me, uint8_t percent );

#endif