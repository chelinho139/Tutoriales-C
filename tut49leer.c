/*Copyright Chelin Tutorials 2011 All Rights Reserved.
    http://chelintutorials.blogspot.com */
#include <stdio.h>

/*Programa sencillo que lee de un archivo*/
int main(){
    printf("\n Bienvenidos al Lector\n");

    FILE* miarchivo=NULL;
    char* nombrearchivo= "texto1.txt";
    char lectura[80];

    //abro el video
    miarchivo= fopen(nombrearchivo, "r");
    if(miarchivo==NULL)return -1;

    fscanf(miarchivo," %[^\n]",&lectura);
    printf("Lectura: %s\n",lectura);
    fscanf(miarchivo," %[^\n]",&lectura);
    printf("Lectura: %s\n",lectura);
    fscanf(miarchivo," %[^\n]",&lectura);
    printf("Lectura: %s\n",lectura);
    /*Nota: Fscanf ademas devuelve un int, para saber
    si se ha llegado al final del archivo
    ej: int x;
    x = fscanf(miarchivo," %[^\n]",&lectura);
    if (x==EOF)printf("Se ha terminado el archivo/m")*/


    fclose(miarchivo);

    return 0;
}
