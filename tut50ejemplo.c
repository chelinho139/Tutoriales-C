/*Copyright Chelin Tutorials 2011 All Rights Reserved.
    http://chelintutorials.blogspot.com */
#include <stdio.h>

/*Ejemplo de la lista de invitados.
Crea un archivo en el directorio
*/

/*Funcion que imprime un menu*/
void imprimir_menu(){
    printf("\n-----------------------------\n");
    printf("Bienvenido al InvitationMaker\n");
    printf("Que desea hacer?\n");
    printf("1-Agregar Invitado\n");
    printf("2-Ver Invitados\n");
    printf("3-Salir\n");
    printf("\n? ");
}

/*Funcion que sirve para agregar un invitado a la lista*/
void agregar_invitado(){

    FILE* miarchivo;
    char* nombrearchivo= "listainvitados.txt";
    char nombreinvitado[80];

    miarchivo= fopen(nombrearchivo,"a"); //abro el archivo "a" sirve para agregar al final
    if(miarchivo==NULL)return -1;

    printf("Ingrese el nombre del invitado:  ");
    fflush(stdin);
    scanf(" %[^\n]",nombreinvitado);

    fprintf(miarchivo,"%s\n",nombreinvitado);

    fclose(miarchivo);
}


/*Funcion que muestra todos los invitados*/
void ver_invitados(){
    FILE* miarchivo;
    char* nombrearchivo= "listainvitados.txt";
    char nombreinvitado[80];
    int endoffile=0; //sirve para saber si llegamos al fin del archivo

    miarchivo= fopen(nombrearchivo,"r");
    if(miarchivo==NULL)return -1;

    printf("Lista Invitados: \n\n");

    //Scanf devuelve un numero. Si ese numero es igual a EOF entonces estamos al final
    endoffile=fscanf(miarchivo," %[^\n]",&nombreinvitado);

    while(endoffile!=EOF){
        //Si endofile es EOF entonces estamosa en el final del archivo
        printf("%s\n",nombreinvitado);
        endoffile=fscanf(miarchivo," %[^\n]",&nombreinvitado);
    }
    fclose(miarchivo);
}


int main(){

    int salir=0; //Flag para cerrar el programa
    int opcion; //variable aux para guardar la opcion
    while(salir==0){
        opcion=-1; //solamente para q no qued guardada la ultima opcion
        imprimir_menu();

        fflush(stdin);
        scanf("%d",&opcion); //obtengo la nueva opcion

        if(opcion==3)salir=1;
        else if(opcion==1)agregar_invitado();
        else if(opcion==2)ver_invitados();
    }

    return 0;
}
