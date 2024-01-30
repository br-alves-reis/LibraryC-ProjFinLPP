#include<stdio.h>
#include<stdlib.h>
 # define LIBRARY_H


//Biblioteca com funções matemáticas que poderá ser utilizada por qualquer projeto em C que a referencie.

#define PI 3,1415926535897932

float Area_Circulo(float raio){
  return PI * (raio * raio);
}
float Area_Triangulo(float base, float altura){
  return base * altura / 2;
}
float Area_Retangulo(float lado){
  return lado * lado;
}

float Volume_Cilindro(float raio, float altura){
  float area =  Area_Circulo(raio);
  return area * altura;
}
float Volume_Cone(float raio, float altura){
  float area =  Volume_Cilindro(raio, altura);
  return area / 3;
}

float Calculo_exponencial(float numero, float expoente){
  float result = 1;
  for(int i=0; i<exp ; i++){
    result = result * numero;
  }
  return result;
}

float Func_polinomial(float *coeficientes, float quant_coef, float x)
  float coef[quant_coef] = {};
  for (int i = 0; i < quant_coef; i++) {
        coef[i] = coeficientes[i];
    }
  float result = 0;

  for (int i = 0; i < sizeof(coef)/sizeof(float); i++) {
      result = coef[i] + result*x;
  }

  return result;
}

