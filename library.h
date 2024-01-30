/*Biblioteca em C, arquivo "header" com extensão .h que deverá ser referenciada no programa que for utiliza-la. Criada para o projeto
final da disciplina de Linguagens e Paradigmas da Programação, com o objetivo de exemplificar um uso da linguagem C
*/

#ifndef LIBRARY_H
  # define LIBRARY_H
  # include <string.h>
  # include <stdlib.h>
  # include <unistd.h>

float Area_Circulo(float raio);
float Area_Triangulo(float base, float altura);
float Area_Retangulo(float lado);
float Volume_Cilindro(float raio, float altura);
float Volume_Cone(float raio, float altura);
float *Calculo_exponencial(float numero, float expoente);
float *Func_polinomial(float *coeficientes, float quant_coef, float x);

#endif
