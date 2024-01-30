#include <stdio.h>
#include "library.h"

int main(){

  float raio, altura, volume;

  raio = 5.58;
  altura = 12.4;

  volume = Volume_Cilindro(raio, altura);

  printf("o Volume eh: %f", volume);
  
}
