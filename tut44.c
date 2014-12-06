/*Copyright Chelin Tutorials 2011 All Rights Reserved.
    http://chelintutorials.blogspot.com */
#include <stdio.h>

//defino una estructura y le cambio el nombre por contacto_t
typedef struct contacto{
    int edad;
    long tel;
}contacto_t;

int main(){
    /* Forma Estatica */
    contacto_t contacto_estatico;
    contacto_estatico.edad=54;
    printf("edad del contacto estatico: %d\n",contacto_estatico.edad);

   /*Forma Dinamica*/

    //creo un puntero
    contacto_t* contacto1 = malloc(sizeof(contacto_t));
    if(contacto1==NULL)printf("ERROR");//chekeo si habia espacio en la mem dinamica
    contacto1->edad=3; //ES LO MISMO QUE HACER (*contacto1).edad=3;
    printf("Edad del contacto1din: %d\n",contacto1->edad);

    //creo otro puntero
    contacto_t* contacto3 = malloc(sizeof(contacto_t));
    if(!contacto3)printf("Error");
    contacto3->tel=443254;
    printf("Telefono de contacto3: %d\n",contacto3->tel);


    //Recuerden liberar la memoria pedida!
    free(contacto1);
    free(contacto3);

    return 0;
}


