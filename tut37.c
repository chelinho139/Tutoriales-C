#include <stdio.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/

//punteros a cadenas de caracteres

int main(void){
    //vieja manera
    char vector_caracteres[] ="Soy la vieja manera";
    printf(" %s\n",vector_caracteres);
    //nueva manera
    // int * p1;

    char * cad = "Youtube"; //es correcto
    //estoi apuntando al primer caracter (Y)
    printf(" %s\n",cad);

    //otra cosa no me den bola
    char * cad2;
    cad2= &vector_caracteres[0];
    //es lo mismo q poner cad2= vector_caracteres
    printf(" %s\n",cad2);


    return 0;
}

