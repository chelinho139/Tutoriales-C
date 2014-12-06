#include <stdio.h>

//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
int main(void){

    int matriz1[2][3];
    matriz1[0][0]=1;
    matriz1[0][1]=2;
    matriz1[0][2]=3;
    //Ahora pongo los de la fila 1
    matriz1[1][0]=-1;
    matriz1[1][1]=-2;
    matriz1[1][2]=-5;

    printf("matriz[0][0]: %d\n",matriz1[0][0]);
    //puedo tener matrizes de muchas dimensiones
    int matriz2[2][3][5][2];
    matriz2[1][2][3][1]=500;
    printf("matriz2[1][2][3][1]: %d\n",matriz2[1][2][3][1]=500);

    return 0;

}
