 
#include "stdio.h" 
 
typedef unsigned long Un32; 
void main(void) 
{ 
	Un32 u32Bitsvariable = 0; 
	Un32 u32Optodo = 0; 
	Un32 u32Bitsel = 0; 
	Un32 u32Vares = 0; 
 
	printf("De cuantos Bits es la Variable en cuestión?:\n"); 
	scanf("%d",&u32Bitsvariable); 
 
	if ( u32Bitsvariable == 8 || u32Bitsvariable == 16 || u32Bitsvariable == 32 ) 
	{ 
	while ( 1 ) 
	{ 
	
	printf("\n Seleccione el operador lógico de su preferencia\n");		
	printf("\n1) Operacion AND.\n"); 
	printf("\n2) Operacion OR.\n"); 
	printf("\n3) Operacion XOR.\n"); 
	scanf("%d",&u32Optodo); 
 
			if (u32Optodo < 1 || u32Optodo >3) 
			{ 
				printf("\nError: La operacion debe estar en el menu de opciones. \n"); 
			} 
 
		else 
			{ 
				printf("\nEl corrimiento de la opción deseada:\n"); 
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

				printf(" \nIndique el valor que desea:%d\n", u32Vares ); 
			} 
				else  
			{ 
				printf("\nError: El corrimiento indiquiado no es posible.\n"); 
		} 
			} 
 
		} 
	} 
 
	else  
	{ 
		printf("\nError: El tamaño de la variable deseada deve ser entre los 8, 16 y 32 Bits.\n"); 
	} 
 
}