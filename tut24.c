#include <stdio.h>
//Chelin Tutorials All Rights Reserved
//http://chelintutorials.blogspot.com/
//Vectores

int main(void){
    printf("\n Bienvenido a la Fabrica de Vectores!\n");
    //largo va contener el largo del vector
    size_t largo;
    printf("Ingrese el largo de su vector: ");
    fflush(stdin); //recuerden limpiar el buffer de entrada
    scanf(" %d",&largo); //asigno el valor a largo
    printf("El largo ingresado es: %d",largo);

    //Creo el vector con el tamaño elejido
    int vector1[largo];
    int i;
    //Voy llenando el vector con un ciclo for

    for (i=0;i<largo;i++){
        printf("\nIngrese el valor para la posicion %d: ",i);
        fflush(stdin);
        scanf( "%d",&vector1[i]);
    }
    printf("ok, ahora vamos a imprimir su vector\n");

    //Ahora imprimo el vector en cada posicion
    for (i=0;i<largo;i++){
        printf("Vector[%d]: %d \n",i,vector1[i]);
    }

    return 0;
}

