#include "stdio.h"
#include "Buscaminas.h"
#include "stdlib.h"
#include "time.h"

void main ( void )
{

  uint8 u8Decision = 0;
  uint8 u8Dificultdad = 0;
  uint8 u8Columna = 0;
  uint8 u8Fila = 0;
  uint8 au8Mapa[15][15] = {{Inicio}};
  uint8 u8Celda = 0;
  uint8 u8BusquedadeMinas = 0;
  uint8 u8Puntaje = 0;
  uint8 u8Bombas = 0;


  for(int i = 0; i < 15; i++){

  for(int j = 0; j < 15; j++){

  au8Mapa[i][j] = Inicio;
    }
      }

  srand(time(NULL));

    while ( u8Decision == 0 ){


      printf("Este es um juego de BuscaMinas, deseas comenzar a jugar?\n(1) yes\n(0) no\n");
      printf("\nPresiona 1 para iniciar\n");
      printf("\nPresiona 2 para no iniciar\n");

      scanf("%d", &u8Decision);

    }

      printf("\nA continuación escogerá la dificultad del juego\n");
      printf("Fácil / Principiante *10 MINAS SOLAMENTE*\n");
      printf("Normal / Veterano *20 MINAS SOLAMENTE*\n");
      printf("Difícil / Experto *30 MINAS SOLAMENTE*\n");
      printf("usted ha seleccionado la siguiente dificultad: ");

      scanf("%d", &u8Dificultdad);

  switch(u8Dificultdad){

    case 1: u8Bombas = DifFacil;
    break;

    case 2: u8Bombas = DifMedio;
    break;

    case 3: u8Bombas = DifDificil;
    break;

        
    default: u8Decision = 0;
    break;
  
   }

      ColocarMinas ( au8Mapa, u8Dificultdad );

      MapaEnPantalla ( au8Mapa );



  while ( 1 ){

    printf("Fila:");
    scanf("%d", &u8Fila);
    
      fflush (stdin);

    printf("Columna: ");
    scanf("%d", &u8Columna);
    
      fflush (stdin);

    u8BusquedadeMinas = VerificacionDeMinas ( au8Mapa, u8Columna, u8Fila );
    if ( u8BusquedadeMinas == 255){

      system ( "..." );
      Pantalla ( au8Mapa );
      printf("USTED HA EXPLOTADO \n");
      printf("Su puntaje ha sido de: \n%d puntos\n", u8Puntaje);
      
      u8Decision = 0;

    
      break;
    
    }

    else{

      u8Puntaje++;
      au8Mapa[u8Fila][u8Columna] = u8BusquedadeMinas;
    
    }
    
    if ( u8Puntaje == CelddasTotales - u8Bombas  ){

      system("...");
      printf("\nUSTED A GANADO, Felicidades, ha vencido el juego!\n");
      printf("\nSu puntaje ha sido de: %d puntos\n\n", u8Puntaje);
      Pantalla ( au8Mapa );
   
      break;
    }

    MapaEnPantalla ( au8Mapa );
 
  }
}

uint8 VerificacionDeMinas ( uint8 au8Mapa[15][15], uint8 u8Columna, uint8 u8Fila )
{

  uint8 u8NumeroDeCelda = 0;

  if ( au8Mapa[u8Fila][u8Columna] == Bomba ){

    return 255;

  }

  if ( au8Mapa[u8Fila-1][u8Columna] == Bomba && u8Columna != 0 ){

    u8NumeroDeCelda++;

  }

  else if ( au8Mapa[u8Fila-1][u8Columna+1] == Bomba ){

    u8NumeroDeCelda++;

  }
  
  if ( au8Mapa[u8Fila][u8Columna+1] == Bomba ){

    u8NumeroDeCelda++;
  
  }
  
  if ( au8Mapa[u8Fila+1][u8Columna+1] == Bomba ){

    u8NumeroDeCelda++;

  }

  if ( au8Mapa[u8Fila+1][u8Columna] == Bomba && u8Columna != 14 ){

    u8NumeroDeCelda++;
  }

  if ( au8Mapa[u8Fila+1][u8Columna-1] == Bomba ){

    u8NumeroDeCelda++;

  }

  if ( au8Mapa[u8Fila][u8Columna-1] == Bomba ){

    u8NumeroDeCelda++;

  }

  if ( au8Mapa[u8Fila-1][u8Columna-1] == Bomba ){

    u8NumeroDeCelda++;

  }

  return u8NumeroDeCelda;

}

void Pantalla ( uint8 au8Mapa[15][15] )
{
  for ( int i = 0; i < Columna - 5; i++ ){

      printf("%d ", i);

  }

  for ( int i = 0; i < 5; i++)

  {

      printf("%d ", i);

  }

  

    for ( int i = 0; i < Columna; i++ ){

    printf("%c%c", CodAsc, CodAsc);

  }

  for ( int i = 0; i < Columna; i++ ){

    for ( int j = 0; j < Fila; j++ )
    {

      if ( au8Mapa[i][j] == Inicio)
      {

        printf("%c ", CaracterEsp);

      }

      else if ( au8Mapa[i][j] == Bomba ){

        printf("%c ", CaracterSigno);

      }

      else
      {

        printf("%d ", au8Mapa[i][j] );

      }
    }

      printf("| %d", i);   
    puts("");

  }
}

void MapaEnPantalla ( uint8 au8Mapa[15][15] )
{

  for ( int i = 0; i < Columna - 5; i++ )
  {

      printf("%d ", i);

  }

  for ( int i = 0; i < 5; i++ ){

      printf("%d ", i);

  }
 
    for ( int i = 0; i < Columna; i++ )
    {

    printf("%c%c", CodAsc, CodAsc);

  }

  printf("\n");

  for ( int i = 0; i < Columna; i++ )
  {

    for ( int j = 0; j < Fila; j++ )
    {

      if ( au8Mapa[i][j] == Inicio )
      {

        printf("%c ", CaracterEsp);

      }

      else if ( au8Mapa[i][j] == Bomba )
      {

        printf("%c ", CaracterEsp);

      }

      else

      {

        printf("%d ", au8Mapa[i][j] );

      }
    }

    printf("| %d", i);   
    puts("");
  }
}

void ColocarMinas ( uint8 au8Mapa[15][15], uint8 u8Dificultdad )
{

  uint8 u8Minas = 0, u8Columna = 0, u8Fila = 0;

  if ( u8Dificultdad == 1 )
  {

    u8Minas = DifFacil;

    printf("Usted a seleccionado el modo sencillo\n\n");
    printf("Encuentra las 10 Minas para ganar, suerte\n\n");


    while ( u8Minas != 0 )
    {

      u8Fila = rand()%(Fila);
      u8Columna = rand()%(Columna);

      if ( au8Mapa[u8Fila][u8Columna] == Inicio )
      {

        au8Mapa[u8Fila][u8Columna] = Bomba;
        u8Minas--;
      }
      else
      {

      }
    }
  }

  else if ( u8Dificultdad == 2 )
  {
    u8Minas = DifMedio; 

    printf("Usted a seleccionado el modo intermedio\n\n");
    printf("Encuentra las 20 Minas para ganar, suerte\n\n");

    while ( u8Minas != 0 )
    {

      u8Fila = rand()%(Fila);
      u8Columna = rand()%(Columna);

      if ( au8Mapa[u8Fila][u8Columna] == Inicio )
      {
        au8Mapa[u8Fila][u8Columna] = Bomba;
        u8Minas--;
      }
      else
      {

      }
    }
  }
  else if ( u8Dificultdad == 3 )
  {

    u8Minas = DifDificil;

    printf("Usted a seleccionado el modo difícil\n\n");
    printf("Encuentra las 10 Minas para ganar, suerte\n\n");

    while ( u8Minas != 0 )
    {

      u8Fila = rand()%(Fila);
      u8Columna = rand()%(Columna);

      if ( au8Mapa[u8Fila][u8Columna] == Inicio )
      {

        au8Mapa[u8Fila][u8Columna] = Bomba;
        u8Minas--;
      }
      else
      {
   
      }
    }
  }
  else
  {
 
  }
}
