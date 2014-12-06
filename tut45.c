/*Copyright Chelin Tutorials 2011 All Rights Reserved.
    http://chelintutorials.blogspot.com */
#include <stdio.h>
//cambio el nombre struct fecha por fecha_t
typedef struct fecha{
    int dia;
    int mes;
    int anio;
}fecha_t;

//funcion que me devuelve una fecha inicializada con todos los datos
fecha_t* crear_fecha(){
    fecha_t* nueva_fecha = malloc(sizeof(fecha_t)); //pido memoria
    if (!nueva_fecha)printf("Error");//si no hay imprimo error

    //Asigno los valores
    fflush(stdin);
    printf("\nIngrese el dia: ");
    scanf("%d",&nueva_fecha->dia); //guardo el dia
     fflush(stdin);
    printf("\nIngrese el mes: ");
    scanf("%d",&nueva_fecha->mes);//guardo el mes
    fflush(stdin);
    printf("\nIngrese el anio: ");
    scanf("%d",&nueva_fecha->anio);//guardo el anio

    return nueva_fecha; //devuelvo la nueva fecha inicializada
}

//funcion que me imprime la fecha de formia prolija =)
void imprimir_fecha(fecha_t* fecha_a_imprimir){
    printf("\n Dia: %d Mes: %d Anio: %d\n", fecha_a_imprimir->dia,fecha_a_imprimir->mes, fecha_a_imprimir->anio);
}

//funcion main
int main(){
    fecha_t* fecha1 = crear_fecha();
    imprimir_fecha(fecha1);

    fecha_t* fecha2 = crear_fecha();
    imprimir_fecha(fecha2);

    fecha_t* fecha3 = crear_fecha();
    imprimir_fecha(fecha3);

    printf("\n Esto fue Todo, Saludos YOUTUBE!\n\a\a");
    return 0;
}


