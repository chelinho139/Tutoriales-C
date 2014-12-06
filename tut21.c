#include <stdio.h>
//Limpiar el Buffer
//fflush(stdin)

int main(void){
    int a;
    int b;
    printf("ingrese el valor de a: ");
    fflush(stdin); //Borramos el Buffer de entrada
    scanf("%d",&a);
    fflush(stdin);

    printf("ingrese el valor de b: ");
    scanf("%d",&b);
    fflush(stdin);
    printf("\n a= %d",a);
    printf("\n b= %d",b);
    return 0;
}
