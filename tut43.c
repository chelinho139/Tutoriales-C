/*Copyright Chelin Tutorials. All Rights Reserved
    http://chelintutorials.blogspot.com */
#include <stdio.h>
#include <stdlib.h>
//Realloc: realocar la memoria
//void * realloc(void * bloque_ant , size_t nuevos_bytes)

int main(){

    void * vector_din =NULL;
    void * vector_din_6_lug =NULL; //podria no usar este puntero
    int * vector_convertido=NULL;//el vector convertido

    //asigno bloque de 4 ints
    vector_din= malloc(4*sizeof(int));
    if (vector_din==NULL)printf(" no se pudo asingar mem"); //me fijo si se asigno

    //convertir el vector_din para poder usarlo como un vector de int
    vector_convertido= (int*)vector_din;
    vector_convertido[0]=1;
    vector_convertido[1]=2;
    vector_convertido[2]=3;
    vector_convertido[3]=4;

    //Bueno , ahora quiero 6 lugares
    vector_din_6_lug=realloc(vector_din,6*sizeof(int)); //podria usar direcametne vector_din en ves de vector_din_6_lug
    if (vector_din_6_lug==NULL)printf(" no se pudo asingar mem");

    //convierto nuevam,ente
    vector_convertido= (int*)vector_din_6_lug;
    printf("El neuvo vector en el [3]:%d\n",vector_convertido[3]);

    //asigno algo en los nuevos lugares
    vector_convertido[4]=5;
    vector_convertido[5]=6;
    printf("El neuvo vector en el [5]:%d",vector_convertido[5]);


    printf("\n\nSaludos guachin!");
    return 0;

}//Fin de codigo :D

