
#include "Bombas.h"


void ConfiguracionBomba ( void ) 
{ 
	uint16 u16MiliSegundos = 0;

	static uint8 u8Bomba1 = Primer_Tiempo; 
	static uint8 u8Bomba2 = Segundo_Tiempo; 
	static uint8 u8Bomba3 = Tercer_Tiempo; 
	static uint8 u8Menu = 0; 
	while( u8Menu != 1 ) 
	{ 
		printf("\n\nConfiguración de las Bombas\n"); 

		printf("Indique el tiempo en segundos para que esté activa la Bomba 1: "); 

		scanf("%d", &u8Bomba1); 
 
		printf("Indique el tiempo en segundos para que esté activa la Bomba 2: "); 

		scanf("%d", &u8Bomba2); 
 
		printf("Indique el tiempo en segundos para que esté activa la Bomba 3: "); 

		scanf("%d", &u8Bomba3); 
 
		printf("\nConfirma la configuración de las Bombas (SI (1) - NO (0))\n");
		printf("Desea Continuar: "); 

		scanf("%d", &u8Menu);
	} 
 
	if( u8Bomba1 == Bomba_Disfuncional ){ 

	}   
	else{ 

	   Bomba1( u8Bomba1 ); 
       u8Bomba1--; 
	}

	if( u8Bomba2 == Bomba_Disfuncional ){ 
	
	}
	else{ 


		Bomba2( u8Bomba2 ); 
		u8Bomba2--; 
	}

	if( u8Bomba3 == Bomba_Disfuncional ){ 
	 
	}   
	else{ 

		Bomba3( u8Bomba3 ); 
		u8Bomba3--; 
	} 
 
	if(u8Bomba1 == 0 && u8Bomba2 == 0 && u8Bomba3 == 0){ 

		printf("\n\nEl tiempo de las bombas se ha agotado, vuelve a configurar para iniciar el sistema\n");
		u8Menu = 0;

	}	
	else{ 
	
	}

	delay(1000); 
} 

void delay ( uint16 u16MiliSegundos ){ 

	int Mili_Segundos = u16MiliSegundos;

	clock_t Tiempo_Inicio = clock();

	while (clock() < Tiempo_Inicio + Mili_Segundos ); 
}