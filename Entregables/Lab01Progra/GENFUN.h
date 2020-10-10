typedef unsigned char uint8;

///////////////////////////////////////////////////////////////////////////////////////

void GENFUN_vCapsOn ( uint8 *pu8Src, uint8 u8SizeOfList );
void GENFUN_vCapsOff ( uint8 *pu8Src, uint8 u8SizeOfList );

///////////////////////////////////////////////////////////////////////////////////////

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList);
void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);

///////////////////////////////////////////////////////////////////////////////////////

void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest);
void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal);

///////////////////////////////////////////////////////////////////////////////////////

uint8 GENFUN_u8GetOccurrence ( uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList );
uint8 GENFUN_u8GetAverage( uint8 *pu8Src, uint8 u8SizeOfList );

///////////////////////////////////////////////////////////////////////////////////////

#define ASCII_FACTOR_DE_CONVERSION		32	
#define ASCII_MENOR_A_ON				65	
#define Limite_INFERIOR					69	

///////////////////////////////////////////////////////////////////////////////////////

#define ASCII_MAYOR_A_ON 				90	
#define ASCII_MENOR_CAPS_ON_OFF			97	
#define ASCII_COD_OBJETIVO				108	

///////////////////////////////////////////////////////////////////////////////////////

#define ASCII_MAYOR_CAPS_ON_OFF			122	
#define ASCII_TRANSFORMADOR_A_CARACTER	169
#define Limite_SUPERIOR					200				
#define RANDOMIZADOR_DE_VALORES			256			
		
///////////////////////////////////////////////////////////////////////////////////////