/*Copyright Chelin Tutorials 2011 All Rights Reserved.
    http://chelintutorials.blogspot.com */
#include <stdio.h>

/*Programa sencillo que escribe en un archivo*/
int main(){
    printf("\n Bienvenidos al Escritor\n");

    FILE* miarchivo= NULL;
    char* nombrearchivo = "Data2.txt";

    /*Ojo: "w" me sobreescribe un archivo si ya existe*/
    miarchivo= fopen(nombrearchivo, "w"); //abro el archivo
    if (miarchivo == NULL)return-1;//si no pudo abrir lo cierro

    //Escribe en un archivo
    fprintf(miarchivo, "Hola soy un archivo! \n");
    fprintf(miarchivo, "Subscribe, Like & Click en mis vids >D \n");

    fclose(miarchivo); //recordar cerrar el archivo
    return 0;
}
