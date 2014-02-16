#ifndef CT_Config_H
#define CT_Config_H

#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void *)0)
#endif
#endif

#ifndef  __cplusplus
typedef enum  bool { false = 0, true } bool;
#endif

#define CT_CIRCLE_SEGM 32

#endif
