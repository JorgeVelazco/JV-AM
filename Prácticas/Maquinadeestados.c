#include "stdio.h" 
#include "stdlib.h" 
#include "machine.h"


int main(void)
{
	uint8 menu[]="\n 1.Michelada \n 2.Desarmador \n 3.Martini\n";
	tenStates encheckweight = 0;
	tenStates enchange = 0;
	unsigned int u8Delay = 0;
	uint8 u8number=0;
	uint8 u8glass=0;

	while(1)
	{
     
      printf("Si ya esta colocado el vaso presione 1 de lo contrario presione 0\n");
      scanf("%d",&u8glass); 

       if(u8glass==glass)
       {  
          printf("Hola\n seleccione la bebida que desees:%s",menu);
	      scanf("%d",&u8number);
	      switch(u8number)
	        {
	         	case 1:
	         	{
                    switch  (encheckweight)
	         	        {
	         	        	case enIce:
	         	        	{
                               printf("HIELO SERVIDO\n");
                               u8Delay = MICHELADA;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enCerveza;
	         	        	}

	         	        	case enCerveza:
	         	        	{
                               printf("CERVEZA SERVIDA\n");
                               u8Delay = MICHELADA;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enLimon;
	         	        	}
                            
                            case enLimon:
	         	        	{
                               printf("LIMON SERVIDO\n");
                               u8Delay = MICHELADA;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enSalsainglesa;
	         	        	}

	         	        	case enSalsainglesa:
	         	        	{
                               printf("SALSA INGLESA SERVIDA\n");
                               u8Delay = MICHELADA;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enTequila;
	         	        	}
	         	        	case enSal:
	         	        	{
                               printf("SIRVIENDO SAL\n");
                               u8Delay = MICHELADA;
                               while(u8Delay--);
                               encheckweight=Delay;
	         	        	}
	         	        	case Delay:
	         	        	{
	         	        		printf("TODO EN ORDEN\n");
	         	        		encheckweight=enchange;
	         	        	}
	         	        }
	         	        printf("BEBIDA SERVIDA\n");
                        break;
	         	}
	         	break;       
	   	        case 2:
	   	        {
                    switch  (encheckweight)
	         	        {
	         	        	case enVodka:
	         	        	{
                               printf("VODKA SERVIDO\n");
                               u8Delay = DESARMADOR;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enJugodenaranja;
	         	        	}

	         	        	case enJugodenaranja:
	         	        	{
                               printf("JUGO DE NARANJA SERVIDO\n");
                               u8Delay = DESARMADOR;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enIce;
	         	        	}
                            case enIce:
	         	        	{
                               printf("HIELO SERVIDO\n");
                               u8Delay = DESARMADOR;
                               while(u8Delay--);
                               encheckweight=Delay;
	         	        	}
	         	        	case Delay:
	         	        	{
	         	        		printf("TODO EN ORDEN\n");
	         	        		encheckweight=enchange;
	         	        	}
	         	        }
	         	        printf("BEBIDA SERVIDA\n");
                        break;
	   	        }
                break;
	   	        case 3:
	   	        {
	   	        	switch  (encheckweight)
	         	        {
	         	        	case enGinebra:
	         	        	{
                               printf("GINEBRA SERVIDA\n");
                               u8Delay = MARTINI ;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enOrangejuice;
	         	        	}

	         	        	case enVermouth:
	         	        	{
                               printf("VERMOUTH SERVIDA\n");
                               u8Delay = MARTINI ;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enFruts;
	         	        	}
                            
                            

	         	        	case enAceitunas:
	         	        	{
                               printf("ACEITUNAS SERVIDAS\n");
                               u8Delay = MARTINI ;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enIce;
	         	        	}
	         	        	case enIce:
	         	        	{
                               printf("HIELO SERVIDO\n");
                               u8Delay = MARTINI ;
                               while(u8Delay--);
                               encheckweight=Delay;
	         	        	}
	         	        	case Delay:
	         	        	{
	         	        		printf("TODO EN ORDEN\n");
	         	        		encheckweight=enchange;
	         	        	}
	         	        }
	         	        printf("BEBIDA SERVIDA\n");
                        break;
	   	        }
	   	        default:
	         	     break;
	        
	         }
       } // noting to do 
	}
}