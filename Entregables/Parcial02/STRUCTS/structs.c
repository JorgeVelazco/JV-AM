#include "stdio.h"
#include "Structs.h"



tstParkingInfo astMyParks[enMaxSectors] = INIT_PARKING_SLOTS;						

void main ( void )
{
	uint8 u8InputAction = 0;
	tenParkingSectors enSector; 
	uint8 u8ConfirmationFromAction = 0;
	uint8 u8AvailableSpots = 0;
	astMyParks[enSector0].u8AvailableSlots = SECTOR0_SLOTS;
	astMyParks[enSector1].u8AvailableSlots = SECTOR1_SLOTS;
	astMyParks[enSector2].u8AvailableSlots = SECTOR2_SLOTS;
	astMyParks[enSector3].u8AvailableSlots = SECTOR3_SLOTS;
	astMyParks[enSector4].u8AvailableSlots = SECTOR4_SLOTS;
	astMyParks[enSector0].u8NotAvailableSlots = 0;
	astMyParks[enSector1].u8NotAvailableSlots = 0;
	astMyParks[enSector2].u8NotAvailableSlots = 0;
	astMyParks[enSector3].u8NotAvailableSlots = 0;
	astMyParks[enSector4].u8NotAvailableSlots = 0;

	while(1)
	{
		fflush(stdin);
		printf("Presione 1 para observar los espacios disponibles\n");
		printf("Presione 2 para observar los espacios no disponibles\n");
		printf("Presione 3 para observar el dinero obtenido\n");
		printf("Presione 4 para ingresar un carro a una sección\n");
		printf("Presione 5 para retirar un carro de una sección\n");
		printf("Ingrese su opción deseada");
		scanf("%d", &u8InputAction);
		printf("Acción Seleccionada %d\n", u8InputAction );

		printf("Ingrese un sector del 0 al 4 ");
		scanf("%d", &enSector);
		printf("Sector seleccionado %d\n", enSector );

		if( enSector < enMaxSectors )
		{
			if( u8InputAction == 1 )
			{
				ShowAvailableSlots ( enSector );
			}
			else if( u8InputAction == 2 )
			{
				ShowNotAvailableSlots ( enSector );
			}
			else if( u8InputAction == 3 )
			{
				ShowEarnedMoney ( enSector );
			}
			else if( u8InputAction == 4 )
			{
				u8ConfirmationFromAction = 0;
				u8ConfirmationFromAction = u8AddCarToSector ( enSector ); 
				
				if ( u8ConfirmationFromAction == 0)
				{
					printf("\nEl espacio de estacionamiento ya ha sido ocupado, acción denegada.\n");
				}
				else
				{
					printf("\nEl espacio de estacionamiento está libre, acción aceptada\n");
					u8ImportPaymentOfSlot( enSector );
				}
			}
			else if ( u8InputAction == 5 )
			{
				u8ConfirmationFromAction = 0;
				u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector ); 
				
				if ( u8ConfirmationFromAction == 0)
				{
					printf("\nTEl espacio de estacionamiento está desocupado, acción aceptada\n");
				}
				else
				{
					printf("\nEl auto se ha ido del espacio del estacionamiento, acción aceptada\n");
				}
			}
			else
			{
				printf("\nLa variable introducida no es válida\n");
			}
			printf("\n\n");
		}
		else
		{
		}

	}
}

after that printing the number of available so you can confirm it*/
void ShowAvailableSlots ( tenParkingSectors enCurrentSector )
{
	uint8 u8Disponibilidad = 0;

	if ( enCurrentSector == enSector0 )
	{
		u8Disponibilidad = astMyParks[enSector0].u8AvailableSlots;
		printf("\nMostrando espacios disponibles - Sector 0: %d\n", u8Disponibilidad);
	}
	else if ( enCurrentSector == enSector1 )
	{
		u8Disponibilidad = astMyParks[enSector1].u8AvailableSlots;
		printf("\nMostrando espacios disponibles - Sector 1: %d\n", u8Disponibilidad);
	}
	else if ( enCurrentSector == enSector2 )
	{
		u8Disponibilidad = astMyParks[enSector2].u8AvailableSlots;
		printf("\nMostrando espacios disponibles - Sector 2: %d\n", u8Disponibilidad);
	}
	else if ( enCurrentSector == enSector3 )
	{
		u8Disponibilidad = astMyParks[enSector3].u8AvailableSlots;
		printf("\nMostrando espacios disponibles - Sector 3: %d\n", u8Disponibilidad);
	}
	else if ( enCurrentSector == enSector4 )
	{
		u8Disponibilidad = astMyParks[enSector4].u8AvailableSlots;
		printf("\nMostrando espacios disponibles - Sector 4: %d\n", u8Disponibilidad);
	}
	else
	{
	}
}

avialable after that printing the number of not available so you can confirm it*/
void ShowNotAvailableSlots ( tenParkingSectors enCurrentSector )
{
	uint8 u8NoDisponibilidad = 0;

	if ( enCurrentSector == enSector0 )
	{
		u8NoDisponibilidad = astMyParks[enSector0].u8NotAvailableSlots;
		printf("\nMostrando espacios no disponibles - Sector 0: %d\n", u8NoDisponibilidad);
	}
	else if ( enCurrentSector == enSector1 )
	{
		u8NoDisponibilidad = astMyParks[enSector1].u8NotAvailableSlots;
		printf("\nMostrando espacios no disponibles - Sector 1: %d\n", u8NoDisponibilidad);
	}
	else if ( enCurrentSector == enSector2 )
	{
		u8NoDisponibilidad = astMyParks[enSector2].u8NotAvailableSlots;
		printf("\nMostrando espacios no disponibles - Sector 2: %d\n", u8NoDisponibilidad);
	}
	else if ( enCurrentSector == enSector3 )
	{
		u8NoDisponibilidad = astMyParks[enSector3].u8NotAvailableSlots;
		printf("\nMostrando espacios no disponibles - Sector 3: %d\n", u8NoDisponibilidad);
	}
	else if ( enCurrentSector == enSector4 )
	{
		u8NoDisponibilidad = astMyParks[enSector4].u8NotAvailableSlots;
		printf("\nMostrando espacios no disponibles - Sector 4: %d\n", u8NoDisponibilidad);
	}
	else
	{
		
	}
}


void ShowEarnedMoney ( tenParkingSectors enCurrentSector )
{
	uint32 u32MoneyProfit = 0;

	if ( enCurrentSector == enSector0 )
	{
		u32MoneyProfit = astMyParks[enSector0].u32MoneyEarn;
		printf("\nMostrando las ganancias monetarias - Sector 0: $ %d.00\n", u32MoneyProfit);
	}
	else if ( enCurrentSector == enSector1 )
	{
		u32MoneyProfit = astMyParks[enSector1].u32MoneyEarn;
		printf("\nMostrando las ganancias monetarias - Sector 1: $ %d.00\n", u32MoneyProfit);
	}
	else if ( enCurrentSector == enSector2 )
	{
		u32MoneyProfit = astMyParks[enSector2].u32MoneyEarn;
		printf("\nMostrando las ganancias monetarias - Sector 2: $ %d.00\n", u32MoneyProfit);
	}
	else if ( enCurrentSector == enSector3 )
	{
		u32MoneyProfit = astMyParks[enSector3].u32MoneyEarn;
		printf("\nMostrando las ganancias monetarias - Sector 3: $ %d.00\n", u32MoneyProfit);
	}
	else if ( enCurrentSector == enSector4 )
	{
		u32MoneyProfit = astMyParks[enSector4].u32MoneyEarn;
		printf("\nMostrando las ganancias monetarias - Sector 4: $ %d.00\n", u32MoneyProfit);
	}
	else
	{
		
	}	
}


uint8 u8AddCarToSector( tenParkingSectors enCurrentSector )
{
	if ( enCurrentSector == enSector0 )
	{
		if ( astMyParks[enSector0].u8AvailableSlots > 0 )
		{
			astMyParks[enSector0].u8AvailableSlots--;
			astMyParks[enSector0].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector1 )
	{
		if ( astMyParks[enSector1].u8AvailableSlots > 0 )
		{
			astMyParks[enSector1].u8AvailableSlots--;
			astMyParks[enSector1].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector2 )
	{
		if ( astMyParks[enSector2].u8AvailableSlots > 0 )
		{
			astMyParks[enSector2].u8AvailableSlots--;
			astMyParks[enSector2].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector3 )
	{
		if ( astMyParks[enSector3].u8AvailableSlots > 0 )
		{
			astMyParks[enSector3].u8AvailableSlots--;
			astMyParks[enSector3].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector4 )
	{
		if ( astMyParks[enSector4].u8AvailableSlots > 0 )
		{
			astMyParks[enSector4].u8AvailableSlots--;
			astMyParks[enSector4].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else
	{
	}
}


uint8 u8RemoveCarFromSector( tenParkingSectors enCurrentSector )
{
	if ( enCurrentSector == enSector0 )
	{
		if ( astMyParks[enSector0].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector0].u8AvailableSlots++;
			astMyParks[enSector0].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector1 )
	{
		if ( astMyParks[enSector1].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector1].u8AvailableSlots++;
			astMyParks[enSector1].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector2 )
	{
		if ( astMyParks[enSector2].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector2].u8AvailableSlots++;
			astMyParks[enSector2].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector3 )
	{
		if ( astMyParks[enSector3].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector3].u8AvailableSlots++;
			astMyParks[enSector3].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector4 )
	{
		if ( astMyParks[enSector4].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector4].u8AvailableSlots++;
			astMyParks[enSector4].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else
	{
	}
}


void u8ImportPaymentOfSlot( tenParkingSectors enCurrentSector )
{
	if ( enCurrentSector == enSector0 )
	{
		astMyParks[enSector0].u32MoneyEarn += 10;
	}
	else if ( enCurrentSector == enSector1 )
	{
		astMyParks[enSector1].u32MoneyEarn += 10;
	}
	else if ( enCurrentSector == enSector2 )
	{
		astMyParks[enSector2].u32MoneyEarn += 10;
	}
	else if ( enCurrentSector == enSector3 )
	{
		astMyParks[enSector3].u32MoneyEarn += 10;
	}
	else if ( enCurrentSector == enSector4 )
	{
		astMyParks[enSector4].u32MoneyEarn += 10;
	}
	else
	{
	
	}
}