//Chelin Tutorials All Rights Reserved
//http://chelintutorials.blogspot.com/
#include <stdio.h>

//HECHO CON WHILE
int main_con_while(void){
    int i=0;
    while (i<10){
        printf("i : %d\n",i++);
    }
    printf("i : %d\n",i);
    return 0;
}
//HECHO CON FOR
int main(void){
    int i;
    for (i=0;i<10;i+=10){
        printf("i: %d\n",i);
    }
    printf("i: %d\n",i);
    return 0;
}
