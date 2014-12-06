#include <stdio.h>
#include <stdlib.h>

//Cuando incluimos archivos nuestros van entre comillas!
#include "tut46funciones.h"

int main()
{
    int a=3, b=2, c;
    float area;
    char inicial;

    //Hago Suma y resta e imprimo.
    c=suma(a,b);
    printf("c: %d\n",c);
    c=resta(a,b);
    printf("c: %d\n",c);

    //Calculo el area de un circulo e imprimo.
    area=area_circulo(2);
    printf("area: %f\n",area);

    //Obtengo la inicial de una cadena e imprimo.
    inicial=primer_caracter("chelin");
    printf("primre caracter: %c",inicial);


    return 0;
}
