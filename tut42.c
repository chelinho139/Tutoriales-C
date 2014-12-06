/*Copyright Chelin Tutorials. All Rights Reserved
    http://chelintutorials.blogspot.com */
#include <stdio.h>
#include <stdlib.h> //importante recuerden incluir
//void * malloc(size_t numero_de_bytes)


int main(){

    void* p1 = malloc(sizeof(char));
    //si esta llena le memoria dinamica
    //malloc devuelve NULL

    if (p1==NULL){
        printf("Error: La memoria esta llena");
    }
    else{
        printf("Se asigno correctamente p1");
    }

    //Libero el espacio pedido con malloc
    //que seria lo que apunta p1
    free(p1);

    return 0;

}

