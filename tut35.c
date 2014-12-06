#include <stdio.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
//& direc de memoria
//* indirec

int main(void){

    int a;
    a=10;

    //imprimo a
    printf("El valor de a: %d\n",a);
    printf("La dire de a: %d\n",&a);

    //creo 2 punteros
    int *p1, *p2;

    //p1 tiene de dato la direc de a (&a)
    p1=&a;

    //copio el dato de p1 en p2
    p2=p1;

    //imprimo p1
    printf("El valor de p1: %d\n",p1);
    printf("La dire de p1: %d\n",&p1);
    printf("Lo que apunta p1: %d\n",*p1);

    //imprimo p2
    printf("El valor de p2: %d\n",p2);
    printf("La dire de p2: %d\n",&p2);
    printf("Lo que apunta p2: %d\n",*p2);


    return 0;
}

