//Chelin Tutorials All Rights Reserved
//http://chelintutorials.blogspot.com/
#include <stdio.h>
//scanf
//Recuerden el & (direc de memoria)

int main(void){

    int numero=0,resultado;

    printf("INGRESE UN NUMERO ENTERO..\n");
    scanf("%d",&numero);

    printf("numero ahora vale: %d\n",numero);
    resultado=numero*numero;
    printf("\nel resultado es: %d\n",resultado);
    return 0;
}

