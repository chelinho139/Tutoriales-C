//Chelin Tutorials All Rights Reserved
//http://chelintutorials.blogspot.com/
#include <stdio.h>
void imprimir(void){
    printf("BIENVENIDO A MI PROGRAMA\n");
}
double suma(double valor1, double valor2){
    double valor3;
    valor3=valor1+valor2;
    return valor3;
}

double multiplicacion(double x, double y){
    double z;
    z=x*y;
    return z;
}

int main(void){
    double a=2.5,b=3,resultado;
    imprimir();
    resultado=suma(a,b);
    printf("%g\n",resultado);
    resultado=multiplicacion(a,b);
    printf("%f\n",resultado);
    imprimir();
    return 0;
}
