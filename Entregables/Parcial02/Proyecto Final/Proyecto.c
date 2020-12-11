#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "ConfiguracionMedicina.h" 

uint8 u8MedSal = SALBUTAMOL;
uint8 u8MedDop = DOPAMINA;
uint8 u8MedBre = BREVIBCLOC;
uint8 u8MedMid = MIDAZOLAM;
int random;
int arreglo[10]={0,0,0,0,0,0,0,0,0,0};
int agregar=0, mod=0, borrar=0, cons=0, sal=0, valor=0;
int pos=0, sum=0, new=0;
char ch, newname[20];
int w=5, x=0, A=0; 

char nombre[20];
void main ( void ){


	uint8 u8Medicina = 0;
	uint8 u8Producto = 0;

	printf("\n\n--------------------------------------\n");

	tenStates enEstadoGeneral = enMenu;
	tenMedicinas enIngredienteActual = 0;;
	tenMedicinas enSiguienteIngrediente = 0;

   
do{
    printf("\nBienvenido al programa de menú\n");


    printf("\n---------------------------------------\n");
    printf("\nSeleccione a donde quiere viajar");
    printf("\n1.Agregar");
    printf("\n2.Modificar");
    printf("\n3.Borrar");
    printf("\n4.Consultar");
    printf("\n5.Salir\n");
    
    ch=getchar();

 

switch(ch)
 {
case '1': puts("Usted ha seleccionado la seccion agregar.\n");
    printf("Introduzca la posicion del numero entre 1 y 10\n");
    scanf("%i", &pos);
    
    printf("Introduzca el nombre de la persona que quiera agregar\n");
    scanf("%s", &nombre);
    printf("La posicion es:%i\n", pos);
    pos=pos-1;
    printf("El nombre agregado es de:%s\n", nombre);
    arreglo[pos]= nombre;
          break;
          
case '2': puts("Usted ha seleccionado la seccion modificar.\n");
    printf("Seleccione la posicion del numero el cual quiere modificar\n");
    scanf("%i", &pos);
    printf("Por que nombre le gustaria modificarlo?\n");
    scanf("%s", &newname);
    pos=pos-1;
    arreglo[pos]=newname;
    printf("La posicion a modificar es:%i\n", pos);
    printf("El nuevo valor es: %s\n", newname);
          break;
          
          
          
          
case '3': puts("Usted ha seleccionado la seccion borrar.\n");
    printf("Usted borrara un dato del arrego, eliminando dato\n");
    printf("Seleccione la posicion del numero el cual quiere modificar\n");
    scanf("%i", &pos);
    pos=pos-1;
    arreglo[pos]=borrar;
    printf("La posición a modificar es:%i\n", pos);
    printf("El nuevo valor es: %i\n", arreglo[pos]);
          
          break;
          
          
          
          
case '4': puts("Usted ha seleccionado la sección consultar.\n");
    printf("El arreglo de nombres es de:\n");
            for (x = 0; x< 10; x++){
            printf("%s ", arreglo[x]);}
          break;
          
          
          
          
case '5': puts("Usted ha seleccionado la seccion salir.\n");
    printf("\nCuide y este al tanto de sus pacientes\n");
    w=0;
          break;
          
          
          
default: puts("Esta seccion del menu no esta disponible por el momento");
 }
}while(w==5);

	printf("\n\nHemos detectado que su paciente esta teniendo problemas de salud\n");

	while ( 1 ){


		uint8 u8Gramos = 0;
		uint8 u8RevisarPeso = 0;
		
		if ( enEstadoGeneral == enMenu ){

			u8Medicina = Menu();
			enEstadoGeneral = enRevisarGramosMed;
		}
		else if ( enEstadoGeneral == enRevisarGramosMed ){

			u8RevisarPeso = RevisarCantidadInicial( u8Gramos );
			if( u8RevisarPeso == TRUE ){


				enEstadoGeneral = enAdministrarMedicamentos;
			}

			else{

			}
		}
		else if ( enEstadoGeneral == enAdministrarMedicamentos ){
			Medicinas( u8Medicina );

			enEstadoGeneral = enStandByMEDS;
		}
		else if ( enEstadoGeneral == enStandByMEDS ){

			u8RevisarPeso = RevisarCantidadFinal ( u8Gramos );
			if ( u8RevisarPeso == TRUE ){

				enEstadoGeneral = enMenu;
			}
			else{
				
			}
		}
		else{
			
		}
	}
}

void Medicinas ( uint8 u8Medicina )
{
	if ( u8Medicina == 1 )
	{
		printf("\n.\n");
		u8MedSal--;

	}
	
	else if ( u8Medicina == 2 )
	{

		printf("\n.\n");
		u8MedDop--;	
	}

	else if ( u8Medicina == 3 )
	{

		printf("\n.\n");
				u8MedBre--;
	}

	else if ( u8Medicina == 4 )
	{

		printf("\n.\n");
		u8MedMid--;
	}
}

uint8 RevisarCantidadInicial ( uint8 u8Gramos ){

	printf("\n\n\n");
	

	u8Gramos = PESO_VACIO;
	if ( u8Gramos == PESO_VACIO ){

		return TRUE;
	}
	else{

		return FALSE;
	}
}

uint8 RevisarCantidadFinal ( uint8 u8Gramos ){

	u8Gramos = PESO_LLENO;
	if ( u8Gramos == PESO_LLENO ){

		return TRUE;
	}

	else{

		return FALSE;
	}
}


uint8 Menu ( ){

	uint8 u8Medicina;

	srand(time(NULL));
  
      random=rand()%200+1;
      printf("\nEstado del Paciente: %d\n",random);

if(random >= 5 && random <= 10){
	printf("\nSu paciente esta sufriendo de HIPERPOTASEMIA TOXICA\n");
	printf("\nSE REQUIERE INYECTAR SALBUTAMOL\n");
	printf("\nAdministrando 300 microgramos de SALBUTAMOL al paciente\n");
		u8MedSal--;
}

if(random >= 15 && random <= 60){
	printf("\nSu paciente esta sufriendo de BADICARDIA\n");
	printf("\nSE REQUIERE INYECTAR DOPAMINA\n");
	printf("\nAdministrando 200 microgramos de DOPAMINA al paciente\n");
		u8MedDop--;
}

if(random >= 61 && random <= 89){
	printf("\nSu paciente esta sufriendo de PRESION ARTERIAL DISTOLICA\n");
	printf("\nSE REQUIERE INYECTAR BREVIBCLOC\n");
	printf("\nAdministrando 500 microgramos de BREVIBCLOC al paciente\n");
		u8MedBre--;
}

if(random >= 90 && random <= 200){
	printf("\nSu paciente esta sufriendo de TAQUICARDIA-ATAQUE DE ANSIEDAD\n");
	printf("\nSE REQUIERE INYECTAR MIDAZOLAM\n");
	printf("\nAdministrando 1500 microgramos de MIDAZOLAM al paciente\n");
		u8MedMid--;
}

while(1)
		 {
		 	ConfiguracionMedicina();
		 }
		 

	random = 0;

	scanf("%d", &u8Medicina);

	
	return u8Medicina;

}
