#include <stdio.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
//Punteros: variable que contiene la direc de memoria de otra

int main(void){
    int b=5;
    int * puntero1;
    int resultado;
    puntero1=&b; //ahora apunta a b

    resultado=10+*puntero1;
    printf("resultado: %d\n",resultado);

    //cambio el valor de b
    b=3;
    resultado=10+*puntero1;
    printf("resultado: %d\n",resultado);

    b=5;
    printf("b : %d\n",b);
    printf("puntero1 : %d\n",puntero1);
    printf("*puntero1 : %d\n",*puntero1);

    return 0;
}


