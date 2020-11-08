typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

void MapaEnPantalla( uint8 au8Mapa[15][15] );
void Pantalla( uint8 au8Mapa[15][15] );
void ColocarMinas( uint8 au8Mapa[15][15], uint8 u8Dificultdad );
uint8 VerificacionDeMinas( uint8 au8Mapa[15][15], uint8 u8Columna, uint8 u8Fila );

#define Inicio							9	
#define Bomba 							10
#define Fila 							15
#define Columna							15
#define DifFacil						10
#define DifMedio						20
#define DifDificil						30
#define CaracterEsp						35
#define CaracterSigno					64
#define CodAsc							95
#define CelddasTotales					225