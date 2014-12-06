#include <stdio.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
//Leer cadenas (con espacios)

int main(void){
    char cadena[40];
    char cadena2[40];
    //Primera Forma
    printf("Ingrese una cadena: ");
    fflush(stdin);
    scanf("%[^\n]s",&cadena);
    printf("\n La cadena es %s\n",cadena);

    //Segunda Forma
    printf("ingrese la segunda cadena: ");
    fflush(stdin);
    gets(cadena2);
    printf("\n La cadena2 es %s\n",cadena2);


    return 0;

}

