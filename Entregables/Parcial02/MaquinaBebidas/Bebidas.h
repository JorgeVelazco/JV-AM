typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32; 

typedef enum{

	enMenu = 0,
	enRevisarPesoInicial,
	enServirBebida,
	enEsperarHastaServir,
	enEstadosMaximos

}tenStates;

typedef enum{

	enHielo = 0,
}tenIngredientes;

uint8 RevisarPesoInicial ( uint8 u8Peso );
uint8 RevisarPesoFinal ( uint8 u8Peso );

void delay ( uint16 u16MiliSegundos );
void Bebidas ( uint8 u8Bebida );

uint8 RevisarElProducto ( uint8 u8Bebida );
uint8 Menu ( );

#define PESO_VACIO		0		
#define PESO_LLENO		10	
#define TRUE						1
#define FALSE						0
#define SAND_IN_THE_CRACK			1
#define SEX_ON_THE_BEACH			2
#define A_SHORT_TRIP_TO_HELL		3
#define DELAY_DEFAULT 				100	  
#define VODKA						100	 	
#define CRANBERRY_JUICE				100 		
#define ORANGE_JUICE				100 		
#define PEACH_SCHNAPPS				100	
#define HIELO						100	
#define STRAWBERRY_SCHNAPPS			100
#define WILDBERRY_SCHNAPPS			100
#define JAGERMEISTER_HERBAL_LIQUEUR 100
#define RED_BULL_ENERGY_DRINK		100
#define PINEAPPLE_JUICE				100
#define MALIBU_COCONUT_RUM			100
#define CAPTAIN_MORGAN_SPICED_RUM	100
 