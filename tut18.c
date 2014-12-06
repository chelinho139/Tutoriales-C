//Chelin Tutorials All Rights Reserved
//http://chelintutorials.blogspot.com/
#include <stdio.h>

int main(void){

    int i=7;
    int tamano,direc;
    tamano= sizeof(int);
    direc=&i;

    printf("i: %d\n",i);
    printf("tamano: %d\n",tamano);
    printf("direc: %d\n",direc);

    return 0;
}
