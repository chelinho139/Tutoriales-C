//Chelin Tutorials All Rights Reserved
//http://chelintutorials.blogspot.com/
//sentencia BREAK!!!

#include <stdio.h>

int main(void){
    int i=0,j=7;

    while (i<10){
        i++;
        if (i==j){
            break;
        }

    }
    printf("i termino: %d\n",i);
    return 0;
}
