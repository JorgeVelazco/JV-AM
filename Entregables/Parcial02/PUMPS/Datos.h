#include "stdio.h"
#include "time.h"

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned long  uint32;

#define Primer_Tiempo			4
#define Segundo_Tiempo			3
#define Tercer_Tiempo			5
#define Bomba_Disfuncional		0 

void ConfiguracionBomba ( void );
void delay ( uint16 u16MiliSegundos ); 