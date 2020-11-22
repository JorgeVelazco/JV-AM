#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "Bebidas.h"

uint8 u8Hielo = HIELO;
uint8 u8Vodka = VODKA;
uint8 u8CranBerry = CRANBERRY_JUICE;
uint8 u8Orange = ORANGE_JUICE;
uint8 u8PeachSchnapps = PEACH_SCHNAPPS; 
uint8 u8StrawberrySchnapps = STRAWBERRY_SCHNAPPS;
uint8 u8WildberrySchanpps = WILDBERRY_SCHNAPPS;
uint8 u8JagermeisterHerbalLiqueur = JAGERMEISTER_HERBAL_LIQUEUR;
uint8 u8RedBullEnergyDrink = RED_BULL_ENERGY_DRINK;
uint8 u8PineappleJuice = PINEAPPLE_JUICE;
uint8 u8MalibuCoconutRum = MALIBU_COCONUT_RUM;
uint8 u8CaptainMorganSpicedRum = CAPTAIN_MORGAN_SPICED_RUM;

void main ( void ){

	uint8 u8Bebida = 0;
	uint8 u8Producto = 0;

	printf("\n\nHi, I'm the drinks serving machine\n");

	tenStates enEstadoActual = enMenu;
	tenIngredientes enIngredienteActual = 0;;
	tenIngredientes enSiguienteIngrediente = 0;

	while ( 1 ){

		uint8 u8Peso = 0;
		uint8 u8RevisarPeso = 0;
		
		if ( enEstadoActual == enMenu ){

			u8Bebida = Menu();
			enEstadoActual = enRevisarPesoInicial;
		}
		else if ( enEstadoActual == enRevisarPesoInicial ){

			u8RevisarPeso = RevisarPesoInicial( u8Peso );
			if( u8RevisarPeso == TRUE ){

				printf("Chechink for a cup: cup detected\n");
				enEstadoActual = enServirBebida;

			}

			else{

				printf("Chechink for a cup: cup not detected\n");
			}
		}
		else if ( enEstadoActual == enServirBebida ){

			printf("\nServing your drink:");

			Bebidas( u8Bebida );

			printf("Your drink is ready to go, chug it or go home\n");

			enEstadoActual = enEsperarHastaServir;
		}
		else if ( enEstadoActual == enEsperarHastaServir ){

			u8RevisarPeso = RevisarPesoFinal ( u8Peso );
			if ( u8RevisarPeso == TRUE ){

				enEstadoActual = enMenu;
			}
			else{

				
			}
		}
		else{

			
		}
	}
}

void Bebidas ( uint8 u8Bebida )
{
	if ( u8Bebida == SAND_IN_THE_CRACK )
	{
		printf("\nADDING: Ice\n");
		u8Hielo--;

		printf("ADDING: 4 oz of Pineapple Juice\n");
		u8PineappleJuice--;

		printf("ADDING: 1 splash of Cranberry Juice\n");
		u8CranBerry--;

		printf("ADDING: 1 oz of Malibu coconut rum\n");
		u8MalibuCoconutRum--;

		printf("ADDING: 1 oz of Captain Morgan spiced rum\n");


	}
	
	else if ( u8Bebida == A_SHORT_TRIP_TO_HELL )
	{

		printf("\nADDING: ice\n");
		u8Hielo--;

		printf("ADDING: 2 oz of peach schnapps\n");
		u8PeachSchnapps--;

		printf("ADDING: 2 oz of Strawberry Schnapps\n");
		u8StrawberrySchnapps--;

		printf("ADDING: 2 oz of Wildberry Schnapps\n");
		u8WildberrySchanpps--;

		printf("ADDING: 1 oz of jagermeister herbal liqueur\n");
		u8JagermeisterHerbalLiqueur--;

		printf("ADDING: 8 oz of red bull energy drink\n");
		u8RedBullEnergyDrink--;

	}

	else if ( u8Bebida == SEX_ON_THE_BEACH )
	{

		printf("\nADDING: Ice\n");
		u8Hielo--;

		printf("ADDING: 1 1/2 oz of peach schnapps\n");
		u8PeachSchnapps--;

		printf("ADDING: 1 oz of Vodka\n");
		u8Vodka--;

		printf("ADDING: 2 oz of Pineapple Juice\n");
		u8PeachSchnapps--;

		printf("ADDING: 1 oz of Cranberry Juice\n");
		u8CranBerry--;


	}
}

uint8 RevisarPesoInicial ( uint8 u8Peso ){

	printf("\n\nLooking for a cup in the inventory\n");
	

	u8Peso = PESO_VACIO;
	if ( u8Peso == PESO_VACIO ){

		return TRUE;
	}
	else{

		return FALSE;
	}
}

uint8 RevisarPesoFinal ( uint8 u8Peso ){

	u8Peso = PESO_LLENO;
	if ( u8Peso == PESO_LLENO ){

		return TRUE;
	}

	else{

		return FALSE;
	}
}


uint8 Menu ( ){

	uint8 u8Bebida;

	printf("\n\nPlease select a beverage: \n\n");
	printf("SAND IN THE CRACK - 1	\n");
	printf("A SHORT TRIP TO HEL - 2 \n");
	printf("SEX ON THE BEACH - 3\n");
	printf("\nYou selected: ");

	scanf("%d", &u8Bebida);
	return u8Bebida;
}