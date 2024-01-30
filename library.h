/*Biblioteca em C, arquivo "header" com extensão .h que deverá ser referenciada no programa que for utiliza-la. Criada para o projeto
final da disciplina de Linguagens e Paradigmas da Programação, com o objetivo de exemplificar um uso da linguagem C
*/

#ifndef LIBRARY_H

  # define LIBRARY_H
  # include <string.h>
  # include <stdlib.h>
  # include <unistd.h>

//Essa função da biblioteca poderá ser utilizada para calcular a área de um círculo fornecendo o tamanho raio.
float Area_Circulo(float raio);

//Essa função da biblioteca poderá ser utilizada para calcular a área de um triângulo fornecendo o tamanho da sua base e da sua altura.
float Area_Triangulo(float base, float altura);

//Essa função da biblioteca poderá ser utilizada para calcular a área de um retângulo fornecendo o tamanho de um lado.
float Area_Retangulo(float lado);

//Essa função da biblioteca poderá ser utilizada para calcular o volume de um cilindro fornecendo o raio da base e a altura desse cilindro.
float Volume_Cilindro(float raio, float altura);

//Essa função da biblioteca poderá ser utilizada para calcular o volume de um cone fornecendo o raio da base e a altura desse cone.
float Volume_Cone(float raio, float altura);

//Essa função da biblioteca poderá ser utilizada para realizar o cálculo de uma potência subsituindo o método pow(x,y) da biblioteca math.h.
float *Calculo_exponencial(float numero, float expoente);

//Essa função da biblioteca poderá ser utilizada para calcular uma função polinomial, lembrando que é preciso somente determinar a quantidade de coeficientes que o valor de x que o algoritmo será capaz de retornar o valor 
// da função.
float *Func_polinomial(float *coeficientes, float quant_coef, float x);



#endif
