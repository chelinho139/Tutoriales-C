#include <stdio.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
//Operaciones aritmeticas de punteros

int main(void){
    int vector[4]; //creo un vector de int con 5 lugares y asigno numeros
    vector[0]=1;
    vector[1]=2;
    vector[2]=3;
    vector[3]=4;
    vector[4]=5;
    //creo 2 punteros
    int * punt1;
    int * punt2;
    //punt1 apunta a la primer posicion del vector
    punt1=&vector[0];
    //punt2 apunta ala tercer posicion del vector
    punt2=&vector[2];


    printf("punt1 apunta a: %d\n",*punt1);
    //avanzo 1
    punt1++;
    printf("le sumo 1 ahora,punt1 apunta a: %d\n",*punt1);
    //avanzo 1
    punt1++;
    printf("le sumo 1 ahora,punt1 apunta a: %d\n",*punt1);
    //avanzo 1
    punt1++;
    printf("le sumo 1 ahora,punt1 apunta a: %d\n",*punt1);



    printf("punt2 apunta a: %d\n",*punt2);
    //retrocedo 1
    punt2--;
    printf("le resto 1 ahora,punt2 apunta a: %d\n",*punt2);
    //retrocedo 1
    punt2--;
    printf("le resto 1 ahora,punt2 apunta a: %d\n",*punt2);

    return 0;
}
