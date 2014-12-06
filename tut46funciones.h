/* contiene declaraciones de variables y funciones
ifndef define, endif sirven para solucionar el caso en el que
se hagan mas de 1 #include funciones.h*/
#ifndef FUNCIONESH
#define FUNCIONESH

#include <stdio.h>

//Declarando Funciones
int suma(int a, int b);

int resta(int a, int b);

char primer_caracter(char* cadena);

double area_circulo(int radio);

//Declarar Variables
float PI;

#endif

