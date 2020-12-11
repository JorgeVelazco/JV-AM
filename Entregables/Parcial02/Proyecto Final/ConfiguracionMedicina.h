#include "MedicinaActiva.h"
#include "stdio.h"

void ConfiguracionMedicina ( void )  
{  
	uint16 u16MiliSegundos = 0; 
 
	static uint8 u8Medicamento1 = Primer_Tiempo;  
	static uint8 u8Medicamento2 = Segundo_Tiempo;  
	static uint8 u8Medicamento3 = Tercer_Tiempo; 
	static uint8 u8Medicamento4 = Cuarto_Tiempo;  
	static uint8 u8Menu = 0;  
	while( u8Menu != 1 )  
	{  

		 
 		printf("\n\nRECUERDE QUE CADA 100 MICROGRAMOS ES 1 SEGUNDO\n"); 

		printf("Administracion de SALBUTAMOL en segundos al paciente (INTRAVENOSA 1) ");  
 
		scanf("%d", &u8Medicamento1);  
  
		printf("Administracion de DOPAMINA en segundos al paciente (INTRAVENOSA 2)");  
 
		scanf("%d", &u8Medicamento2);  
  
		printf("Administracion de BREVIBCLOC en segundos al paciente (INTRAVENOSA 3)");  
 
		scanf("%d", &u8Medicamento3);  
  
  		printf("Administracion de MIDAZOLAM en segundos al paciente (INTRAVENOSA 4)");  
 
		scanf("%d", &u8Medicamento4);  

		printf("\nConfirma la administracion del medicamento (SI (1) - NO (0))\n"); 
		printf("Desea Continuar: ");  
 
		scanf("%d", &u8Menu); 
	}  
  
	if( u8Medicamento1 == Medicina_Administrada ){  
 
	}    
	else{  
 
	   Medicamento1( u8Medicamento1 );  
       u8Medicamento1--;  
	} 
 
	if( u8Medicamento2 == Medicina_Administrada ){  
	 
	} 
	else{  
 
 
		Medicamento2( u8Medicamento2 );  
		u8Medicamento2--;  
	} 
 
	if( u8Medicamento3 == Medicina_Administrada ){  
	  
	}    
	else{  
 
		Medicamento3( u8Medicamento3 );  
		u8Medicamento3--;  
	}  
  
  	if( u8Medicamento4 == Medicina_Administrada ){  
	 
	} 
	else{  
 
 
		Medicamento4( u8Medicamento4 );  
		u8Medicamento4--;  
	} 

	if(u8Medicamento1 == 0 && u8Medicamento2 == 0 && u8Medicamento3 == 0 && u8Medicamento4 == 0){  
 
		printf("\n\nEl medicamento se ha administrado exitosamente\n"); 
		u8Menu = 0; 

			printf("Detectando condiciones de salud\n");
			printf("\nDetectando condiciones de salud: Su paciente se encuentra bien\n");
			printf("\nSu paciente se encuentra estable, vaya a consultarlo\n");
			printf("\n\n----------------------0---------------------\n\n");
 
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