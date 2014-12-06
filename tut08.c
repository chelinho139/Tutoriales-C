//Chelin Tutorials All Rights Reserved
//http://chelintutorials.blogspot.com/


#include <stdio.h>
//c1 && c2: c1 y c2
//c1 || c2 : c1 o c2
//! c1: si no(c1)
int main(){
    int a=3,b=5,c=3,resultado;
    resultado= !((a<b) && (b<c));
    printf("resultado1: %d \n",resultado);
    resultado= (a<b) || (b<c);
    printf("resultado2: %d\n",resultado);
    resultado= !(a!=c);
    printf("resultado3: %d\n",resultado);


    return 0;

}
