#include <stdio.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
//Estructuras dentro de estructuras

//estructura de la fecha
typedef struct fecha{
    int dia;
    int mes;
    int anio;
}fecha_t;


//estructura del contacto
typedef struct contacto{
    char nombre[80];
    long tel;
    //fecha_nacimineto tambien es un struct
    fecha_t fecha_nacimiento;
}contacto_t;


//funcion para crear una fecha
fecha_t crear_fecha(){
    //creo una fecha en blanco
    fecha_t nueva_fecha;

    //asigno dia
    printf("\ningrese el dia:");
    fflush(stdin);
    scanf(" %d",&nueva_fecha.dia);

    //asigno mes
    printf("\ningrese el mes:");
    fflush(stdin);
    scanf(" %d",&nueva_fecha.mes);

    //asigno anio
    printf("\ningrese el anio:");
    fflush(stdin);
    scanf(" %d",&nueva_fecha.anio);

    //devuelvo la fecha
    return nueva_fecha;
}

//funcion para crear un contacto
contacto_t crear_contacto(){
    //creo un contacto en blanco
    contacto_t nuevo_contacto;

    //asigno el nombre
    printf("ingrese el nombre");
    fflush(stdin);
    gets(nuevo_contacto.nombre);

    //asignar el tel
    printf("ingrese el tel");
    fflush(stdin);
    scanf(" %d",&nuevo_contacto.tel);

    //asignar la fecha de nacimiento
    nuevo_contacto.fecha_nacimiento = crear_fecha();

    //devuelvo el contacto listo
    return nuevo_contacto;
}



int main(void){
    //creo un contacto esto es lo mismo q poner: contacto_t c1 = crear_contacto();
    contacto_t c1;
    c1 = crear_contacto();

    //si se animan hagan la funcion
    //imprimir_contacto(c1);
    return 0;
}




