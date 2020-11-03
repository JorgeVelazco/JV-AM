#include "stdio.h"
#include "Luhn.h"

void main ( void )
{

	uint8 au8NumerodeTarjeta[16] = {2, 9, 8, 7, 5, 1, 2, 4, 3, 4, 7, 1, 5, 6, 9, 1};
	uint8 u8Verificar = 0;

	printf("Número de Tarjeta: ");
	for (int n = 0; n < 16; n++ ){
			printf("%d ", au8NumerodeTarjeta[n]);
		}

	u8Verificar = u8LuhnCheck(&au8NumerodeTarjeta[0]);

	if(u8Verificar == 0){

		printf("\nSu Número de Tarjeta es Válido.");
	}

	else{

		printf("\nSu Número de Tarjeta es Inválido.");
	}
}

uint8 u8LuhnCheck ( uint8 *pu8Data ){

	uint8 u8TarjetaTemporal = 0;
	uint8 u8Verificar = 0;


	for(int i = 0; i<16; i++){

		if(i % 2 == 0){
	}

		else{

			pu8Data[i] = pu8Data[i]*2;
			if(pu8Data[i] > LIMITE_DE_UN_DIGITO){

			pu8Data[i] = ( pu8Data[i] % 10 ) + 1;
			
			}
			else{	
			}
		}

		u8TarjetaTemporal += pu8Data[i];
		printf("%d\n", u8TarjetaTemporal); //Nota Tarjeta
		
	}
	
	u8Verificar = u8TarjetaTemporal % 10;

	return u8Verificar;
}