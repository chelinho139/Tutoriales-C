//Chelin Tutorials All Rights Reserved
//http://chelintutorials.blogspot.com/

#include <stdio.h>

//esta funcion devuelve un int pero no recibe nada como paramentro
int ardilla(void){
    int algo=3;
return algo;
}
//esta funcion no de vuelve nada debe tener void al principio
void funcion_que_no_devuelve(void){
    printf("ESTA FUNCION NO DE VUELVE NADA\n");

}

//esta funcion recibe un int por parametro y devuelve un int
int cuadrado(int numero){
    int cuad=numero*numero;
    return cuad;
}

//funcion principal
int main(){
    int x;
    printf("HOLA\n"); //llama a printf y le pasa "hola" comparametro
    x= ardilla();//llamo ardilla() y lo asigno a x
    printf("%d\n",x);//imprimo el valor de x
    funcion_que_no_devuelve();//llamo a la funcion q no devulve nada
    int n=5,resultado;
    resultado=cuadrado(n);//llamo a cuadrado,le paso n como parametro,guardo el valor q devuelve a resultado
    printf("%d\n",resultado);//imprimo resultado

    return 0;
}

//NOTAS: main tambien devuelve un int, el cual si es 0 esque termino todo sin problemas :D

