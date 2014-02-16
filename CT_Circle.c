#include <stdlib.h>
#include <stdint.h>

#include "CT_Config.h"
#include "CT_Circle.h"

CT_Circle_t* CT_Circle_Create(void) {
	CT_Circle_t* me = (struct CT_Circle*) malloc(sizeof(struct CT_Circle));
	if(NULL != me) {
		CT_Circle_Init(me);
	}    
	return me;
}

void CT_Circle_Init( CT_Circle_t* const me ) {
	me->segments = CT_CIRCLE_SEGM;
}

void CT_Circle_Destroy( CT_Circle_t* const me ) {
	if( NULL != me ) {
		//Maybe Cleanup
	}
	free(me);
}

bool CT_Circle_fillPercent( CT_Circle_t* me, uint8_t percent ) {
	uint8_t newfill = 0;

	if( percent <= 0 || percent > 100 ) {
		// Assure percent value
		return false;
	}

	newfill = (uint8_t) me->segments * percent / 100;

	if( newfill <= me->segments ) {
		me->fill = newfill;
	} else {
		//TODO: handle this error
		return false;
	}
	
	return true;
}