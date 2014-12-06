#include <stdio.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
//Mas sobre Estructuras
struct contacto{
    char nombre [40];
    char direccion [80];
    int edad;
    long telefono;
}; //!!!!!!!!!!!!!;

//cambiando el nombre del tipo strct contacto
typedef struct contacto  contacto_t;

int main(void){
    contacto_t c1;

    //recibo los valores por entrada del usuario
    printf("Ingrese el nombre:");
    fflush(stdin);
    gets(c1.nombre);
    printf("\ningrese la direccion:");
    fflush(stdin);
    gets(c1.direccion);
    printf("\nIngrese la edad:");
    fflush(stdin);
    scanf("%d",&c1.edad);
    printf("\nIngrese telefono:");
    fflush(stdin);
    scanf("%d",&c1.telefono);
    //imprimo los valores
    printf("Nombre: %s\nDirec: %s\nEdad: %d,\nTel: %d",c1.nombre,c1.direccion,c1.edad,c1.telefono);

    return 0;
}







