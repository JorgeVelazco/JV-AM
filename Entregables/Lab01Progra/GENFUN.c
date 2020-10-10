#include "stdio.h"
#include "GENFUN.h"

void main ( void )
{
	uint8 au8prueba1[14] = "Buenas Noches!";
	uint8 au8Bprueba2[14] = "Optimus Prime!";  
	uint8 au8ArrNumerico [8] = {18,5,7,2,6,31,24,11};
	uint8 au8RndmCaracter [255];
	uint8 n = 0;
	uint8 u8AOcurrenciaArr = 0;
	uint8 u8PromedioArr = 0;
	printf("\nMayusculas Encendidas\n");
	printf("El regulador antes de la funcion %s\n", au8prueba1);

			GENFUN_vCapsOn( &au8prueba1[0], 14);

	printf("El regulador despues de la funcion %s\n", au8prueba1);


	
	printf("\nMayusculas Apagadas\n");
	printf("El regulador antes de la funcion %s\n", au8prueba1);

			GENFUN_vCapsOff( &au8prueba1[0], 14);

	printf("El regulador despues de la funcion %s\n", au8prueba1);

///////////////////////////////////////////////////////////////////////////////////////

	printf("\nObtener Ocurrencia\n"); 
	printf("Arreglo:");
	printf("%s\n", au8Bprueba2);
	printf("Objetivo de Ocurrencia %c\n", ASCII_COD_OBJETIVO);

			u8AOcurrenciaArr = GENFUN_u8GetOccurrence ( &au8Bprueba2[0], ASCII_COD_OBJETIVO, 14 );

	printf("Las ocurrencias en el Arreglo %i\n", u8AOcurrenciaArr);
	
/*
	//func get average
	printf("\nGet Average\n");
	printf("Array of numbers: ");
	for (n = 0; n < 6; n++ )
	{
		printf("%d ", au8NumberArray[n]);
	}
	u8ArrayAverage = GENFUN_u8GetAverage ( &au8NumberArray[0], 6 );
	printf("\nAverage: %d", u8ArrayAverage);
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("\nConjunto de memoria\n");
	printf("El regulador antes de la funcion %s\n", au8prueba1);
	printf("Elemento para ser llenado: %c\n", ASCII_TRANSFORMADOR_A_CARACTER);

			GENFUN_u8MemSet(au8prueba1, ASCII_TRANSFORMADOR_A_CARACTER, 14 );

	printf("El regulador despues de la funcion %s\n", au8prueba1);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf("\nCopia de Memoria\n");
	printf("Primer regulador: %s\n", au8Bprueba2);
	printf("Segundo regulador: %s\n", au8prueba1);

			GENFUN_u8MemCopy( &au8prueba1, &au8Bprueba2, 14 );

	printf("Primer regulador despues de la funcion: %s\n", au8Bprueba2);
	printf("Segundo regulador despues de la funcion: %s\n", au8prueba1);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("\nLista Ordenada\n");
	printf("Regulador antes de la funcion: ");
	for (n = 0; n < 8; n++){
			printf("%d ", au8ArrNumerico[n]);
		}

			GENFUN_vSortList ( &au8ArrNumerico, &au8ArrNumerico, 8 );

	printf("\nRegulador despues de la funcion: ");
	for (n = 0; n < 8; n++){
			printf("%d ", au8ArrNumerico[n]);
		}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("\n\nIndicio suave\n");
	printf("Indicio a suave\n");
	srand(time(0));
	
	for (n = 0; n < RANDOMIZADOR_DE_VALORES-1; n++){   
    		au8RndmCaracter[n] = rand() % RANDOMIZADOR_DE_VALORES;
		}
	for (n = 0; n < RANDOMIZADOR_DE_VALORES-1; n++){
			printf("%d ", au8RndmCaracter[n]);
		}

			GENFUN_vSoftSignal (&au8RndmCaracter, &au8RndmCaracter);

	printf("\n\nIndicio Suavizado:");

	for (n = 0; n < RANDOMIZADOR_DE_VALORES-1; n++){
			printf("%d ", au8RndmCaracter[n]);
		}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("\n\nIndicio Filtrado\n");
	printf("Indicio a Filtro de %d a %d:\n", Limite_INFERIOR, Limite_SUPERIOR);

	for (n = 0; n < RANDOMIZADOR_DE_VALORES-1; n++){   
    		au8RndmCaracter[n] = rand() % RANDOMIZADOR_DE_VALORES;
		}

	for (n = 0; n < RANDOMIZADOR_DE_VALORES-1; n++){
			printf("%d ", au8RndmCaracter[n]);
		}

			GENFUN_vFilterSignal (&au8RndmCaracter, &au8RndmCaracter, Limite_SUPERIOR, Limite_INFERIOR);

	printf("\n\nIndicio Filtrado:\n");
	for (n = 0; n < RANDOMIZADOR_DE_VALORES-1; n++){
			printf("%d ", au8RndmCaracter[n]);
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList){
	while(u8SizeOfList != 0){
		if(*pu8Src >= ASCII_MENOR_CAPS_ON_OFF && *pu8Src <= ASCII_MAYOR_CAPS_ON_OFF){
			*pu8Src -= ASCII_FACTOR_DE_CONVERSION;
		}
		else
	{	
		}

		pu8Src++;
		u8SizeOfList--;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void GENFUN_vCapsOff (uint8 *pu8Src, uint8 u8SizeOfList){
	while(u8SizeOfList != 0){
			if(*pu8Src >= ASCII_MENOR_A_ON && *pu8Src <= ASCII_MAYOR_A_ON){

			*pu8Src += ASCII_FACTOR_DE_CONVERSION;
		}
		else
	{	
		}

		pu8Src++;
		u8SizeOfList--;

	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint8 GENFUN_u8GetOccurrence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList){
	uint8 u8AOcurrenciaArr = 0;
		while (u8SizeOfList != 0){
			if(*pu8Src ==  u8Target)
		{
			u8AOcurrenciaArr++;
		}
		else
	{		
		}

	pu8Src++;
	u8SizeOfList--;

	}

		return u8AOcurrenciaArr;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint8 GENFUN_u8GetAverage(uint8 *pu8Src, uint8 u8SizeOfList){
	uint8 u8PromedioArr = 0;
		while (u8SizeOfList != 0){

		u8PromedioArr += *pu8Src;
		pu8Src++;
		u8SizeOfList--;
	}

	u8PromedioArr = u8PromedioArr / u8SizeOfList;
	return u8PromedioArr;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList){
	uint8 *pu8Dest = pu8Src;
		while (u8SizeOfList-- > 0){
			*pu8Dest++ = u8Char2Set;
	}
	return *pu8Src;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList){
	for (int i = 0; i < u8SizeOfList; i++){
		pu8Src[i] = pu8Dest[i];
	} 
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList){
	for (int i = 0; i < u8SizeOfList; ++i){
		for (int j = i + 1; j < u8SizeOfList; ++j){
			if (pu8Src[i] > pu8Src[j]){

				uint8 u8TemporalVar =  pu8Src[i];
				pu8Src[i] = pu8Src[j];
				pu8Src[j] = u8TemporalVar;
   }
  }
 }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest){
	for (int i = 0; i<256; i++){
		pu8Dest[i]=(pu8Src[i] + pu8Src[i+1])/2;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal){
	for (int i = 0; i < RANDOMIZADOR_DE_VALORES; ++i){
		for (int j = i + 1; j < RANDOMIZADOR_DE_VALORES; ++j){
			if (pu8Src[i] > Limite_SUPERIOR) {

				pu8Src[i] = Limite_SUPERIOR;
	}
			else if (pu8Src[i] < Limite_INFERIOR){
			}
		}
	}
}