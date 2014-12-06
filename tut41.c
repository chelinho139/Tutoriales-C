/*Copyright Chelin Tutorials. All Rights Reserved
    http://chelintutorials.blogspot.com */
#include <stdio.h>
#include <stdlib.h> //importante recuerden incluir
//malloc free realloc
//Malloc sirve para asignar en Mem Dinamica
//void * malloc(size_t numero_de_bytes)

//Supongamos que quiero guardar un int =3
int main(){
    //En memoria Estatica seria:
    //int a;
    //a=3;
    //printf("a:%d",a);

    //En memoria Dinamica:
    void * p1 = NULL;
    //Pido espacio en la memoria dinamica
    //con la funcion malloc para un entero

    p1 = malloc(sizeof(int));

    //si quiero hacer cosas con ese espacio
    //tengo q convertir p1 de (void *)  a (int *)

    int * p1_convertido = (int *)p1;
    //Guardo el numero 3
    *p1_convertido= 3;
    //imprimo
    printf("p1 convertido:%d \n",*p1_convertido);

    return 0;

}

