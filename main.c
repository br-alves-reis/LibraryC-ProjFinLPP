#include <stdio.h>
#include "library.h" // referenciando o arquivo headeres que é implementada pelo arquivo library.c que contém a implementação das funções descritas.

int main(){

  float raio, altura, volume, area;

  raio = 5.58;
  altura = 12.4;

  volume = Volume_Cilindro(raio, altura);

  printf("o Volume eh: %f", volume);

  area = Area_Circulo(raio);

  printf("a area do circulo eh: %f", area);

  
  
}
