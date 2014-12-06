#include <stdio.h>
//Chelin Tutorials All Rights Reserved
//http://chelintutorials.blogspot.com/

//Cadenas de caracteres
//(3,1,-1,9,0) Vector de int
//(h,o,l,a, ,m,u,n,d,o) Vector de char
int main(void){
    //Primer forma: asignando en cada lugar
    char nombre[5];
    nombre[0]='J';
    nombre[1]='U';
    nombre[2]='A';
    nombre[3]='N';
    nombre[4]='\0';
    printf("%s\n",nombre);

    //Segunda forma: usando este truquito!!
    //Esta forma tambien me agrega el \0 al final
    char nombre2[]="Ramon Jose Hernandez IV XXX";

    printf("%s\n",nombre2);

    //Tambien puedo acceder a determinada posicion de la cadena
    printf("El valor [3] del nombre: %c\n",nombre2[3]);

    return 0;
}

