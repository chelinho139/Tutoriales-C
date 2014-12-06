#include <stdio.h>
//vector=(1,2,3,4)

int main(void){
    int vector[3];
    float vector_float[100];
    vector_float[56]=3.145123131;
    vector[0]=124;
    vector[1]=256;
    vector[2]=314;
    vector[3]=41;

    printf("Vector en la posicion 0: %d\n",vector[0]);
    printf("Vector en la posicion 1: %d\n",vector[1]);
    printf("Vector en la posicion 2: %d\n",vector[2]);
    printf("Vector en la posicion 3: %d\n",vector[3]);
    printf("Vector float  en la posicion 56: %f\n",vector_float[56]);
    printf("Vector float  en la posicion 1: %f\n",vector_float[1]);


    return 0;
}
