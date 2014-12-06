#include <stdio.h>
#include <string.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
//Estructuras

struct alumno{
    int nota;
    char nombre[40];
    int edad;
};//recuerden el ;


int main(void){
    //crear variable a1 del tipo struct alumno
    struct alumno a1;
    //asigando la nota de a1
    a1.nota=4;
    //asignando la edad de a1
    a1.edad=19;
    //estamos asignando el nombre de a1
    char nombre_aux[]="Javier Xavier";
    strcpy(a1.nombre,nombre_aux);

    //imprimo las cosaahh
    printf("El alumno %s ,edad %d tiene nota %d\n",
           a1.nombre,a1.edad,a1.nota);

    //blah bla blah
    struct alumno a7;
    a1.nota=1;
    a1.edad=2;
    return 0;
}




