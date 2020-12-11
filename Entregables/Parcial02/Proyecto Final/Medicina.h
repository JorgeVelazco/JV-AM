#include "stdio.h" 
#include "time.h" 
 
typedef unsigned char  uint8; 
typedef unsigned short uint16; 
typedef unsigned long  uint32; 
typedef enum{

	enMenu = 0,
	enRevisarGramosMed,
	enAdministrarMedicamentos,
	enStandByMEDS,
	enEstadosMaximos,
	enEstadoGeneral,

	}tenStates;

typedef enum{

	enMedSal = 0,
		enMedDop = 0,
			enMedBre = 0,
				enMedMid = 0,

}tenMedicinas;


uint8 RevisarCantidadInicial ( uint8 u8Gramos );
uint8 RevisarCantidadFinal ( uint8 u8Gramos );


void Medicinas ( uint8 u8Medicina );


uint8 RevisarMedicamentos ( uint8 u8Medicina );
uint8 Menu ( );


#define Primer_Tiempo				4 
#define Segundo_Tiempo				3 
#define Tercer_Tiempo				5 
#define Cuarto_Tiempo				6
#define Medicina_Administrada		0  
#define TRUE						1 
#define FALSE						0 
#define SALBUTAMOL					101 	
#define DOPAMINA					102 	
#define BREVIBCLOC					103   
#define MIDAZOLAM					104   
#define DELAY_DEFAULT 				100	 
#define MedSal						100	
#define MedDop						100	
#define MedBre						100	
#define MedMid						100	
#define PESO_VACIO					0		
#define PESO_LLENO					10	

void ConfiguracionMedicina ( void ); 
void delay ( uint16 u16MiliSegundos );