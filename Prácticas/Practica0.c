
#include "stdio.h"

typedef unsigned long Un32;

void main(void)
{
	Un32 u32Bitsvariable = 0;
	Un32 u32Optodo = 0;
	Un32 u32Bitsel = 0;
	Un32 u32Vares = 0;

	printf("\nDe cuantos Bits es la Variable? :\n");
	scanf("%d",&u32Bitsvariable);

	if ( u32Bitsvariable == 8 || u32Bitsvariable == 16 || u32Bitsvariable == 32 )
	{
		while ( 1 )
		{
			printf("\n 1) Operacion AND. \n");
			printf("2) Operacion OR.\n");
			printf("3) Operacion XOR.\n");
			printf(" Seleccionar operacion deseada");
			scanf("%d",&u32Optodo);

			if (u32Optodo < 1 || u32Optodo >3)
			{
				printf("\nError: La operacion debe estar en el menu de opciones. \n");
			}

				else
				{
					printf("\nCorrimiento de la opcion deseada. \n");
					scanf("%d",&u32Bitsel);

					if ( u32Bitsel < u32Bitsvariable)
						{
							if ( u32Optodo == 1 )
							{
								u32Vares &= ~( 1 << u32Bitsel);
							}

							else if ( u32Optodo == 2 )
							{
								u32Vares |= ( 1 << u32Bitsel);
							}

							else 
							{
								u32Vares ^= ( 1 << u32Bitsel );
							}

							printf(" \nValor de la variable : %d", u32Vares );
						}
						else 
						{
							printf("\nError: El corrimiento deseado es mayor a los Bits seleccionados.\n");
						}
				}

		}
	}

	else 
	{
		printf("\nError: El tamaño de la variable deseada deve ser entre los 8, 16 y 32 Bits.\n");
	}

}