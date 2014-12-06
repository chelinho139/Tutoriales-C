#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
int main(void){
    char nombre1[]="Mi nombre es Chelin";
    char nombre2[]="Mi nombre es Tutorials(???";
    printf("%s\n",nombre1);
    printf("%s\n",nombre2);

    //string copy
    printf("Copio lo q tiene nombre1 arriba de nombre2\n");
    strcpy(nombre2,nombre1);
    printf("%s\n",nombre2);

    //string lenght
    int largo;
    largo=strlen(nombre1);
    printf("Longitud de nombre1: %d\n",largo);

    //string compare
    int i;
    i=strcmp(nombre1,nombre2);
    printf("i : %d\n",i);

    //to uppuer, tolower y asci
    char mayus;
    mayus=toupper(nombre1[7]);
    printf("caracter 7 en mayus : %c",mayus);

    return 0;

}

