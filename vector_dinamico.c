/*Chelin Tutorials 2012 - Todos los Derechos Reservados
http://www.chelintutorials.blogspot.com/
Autor: chelo_c@live.com
Se Permite el uso para Fines no Lucrativos*/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "vector_dinamico.h"

/*Estructura del vector*/
struct vector{
    size_t tam;
    void** datos;
};

//Crea el vector
vector_t* vector_crear(size_t tam_inicial){

    //pedimos memoria para la estructura
    vector_t* vector =malloc(sizeof(vector_t));
    if(vector==NULL)return NULL;

    vector->tam = tam_inicial; //guardamos el tamano

    //pedimos memoria para los datos
    vector->datos = malloc(sizeof(void*)*tam_inicial);
    if(vector->datos==NULL){
        free(vector); //puramente elegancia
        return NULL;
    }

    //limpiar el vector (PONER EN NULL CADA LUGAR
    for (int i=0; i<tam_inicial; i++){
        vector->datos[i]=NULL;
    }

    return vector;
}


/*Agrega un elemento en un determinado indice al vector
    me deuvuelve si hubo algun error o no.*/
bool vector_agregar(vector_t* vector, size_t indice,void* elemento){
    //Validamos el indice
    if(indice<0 || indice >= vector->tam) return false;

    vector->datos[indice] = elemento; //Guardamos el elemento

    return true;

}


/*Devuelve el tam actual del vector*/
size_t vector_obtener_tam(vector_t* vector){
    return vector->tam;
}

/*Devuelve el elemento en el indice*/
void* vector_obtener(vector_t* vector, size_t indice){
    //Validamos el indice
    if(indice<0 || indice >= vector->tam) return NULL;
    return vector->datos[indice];

}


/*Redimensiona el vector Devuelve si hubo algun error o no.*/
bool vector_redimensionar(vector_t* vector, size_t nuevotam){
    if(nuevotam< vector->tam)return false;//validamos el nuevo tam

    //creamos un vector temporal.
    void** datos_nuevos = realloc(vector->datos,nuevotam*sizeof(void*));
    if(datos_nuevos==NULL)return false;

    //liberamos el anterior
    free(vector->datos);

    vector->datos = datos_nuevos;
    vector->tam = nuevotam;
    return true;


}


/*Destruir el vector (liberar memoria)*/
void vector_destruir(vector_t* vector){
    free(vector->datos);
    free(vector);

}


/*Pruebas basicas del Vector*/
void pruebas_vector(){
    vector_t* v1 = vector_crear(3);

    int dato1 = 7;
    float dato2= 3.1452;
    char* dato3= "ChelinTutorials";
    int dato4 = 24;

    //prueba guardar valido
    if(vector_agregar(v1,0,&dato1)==true)printf("<!>Prueba el elemento en indice se guardo-> BIEN\n");

    vector_agregar(v1,1,&dato2);
    vector_agregar(v1,2,dato3);

    //este no deberia guardarse pq no hay espacio
    if(vector_agregar(v1,3,&dato4)==false)printf("<!>Prueba el elemento en indice invalido no se guardo-> BIEN\n");

    int* elemento_en_0 = (int*)(vector_obtener(v1,0));
    float* elemento_en_1 = (float*)(vector_obtener(v1,1));
    char* elemento_en_2 = (char*)(vector_obtener(v1,2));

    printf("V1 en pos:%d = %d\n",0,*elemento_en_0);
    printf("V1 en pos:%d = %f\n",1,*elemento_en_1);
    printf("V1 en pos:%d = %s\n",2,elemento_en_2);

    if((vector_obtener(v1,3)==NULL))printf("<!>Prueba el elemento no existe-> BIEN\n");


    //redimensiono
    if(vector_redimensionar(v1,7))printf("<!>Prueba Redimensionar-> BIEN\n");

    //agergar dsps de redimensionar
    if(vector_agregar(v1,3,&dato4)==true)printf("<!>Prueba agregar dsps de Redimensionar-> BIEN\n");

    int* elemento_en_4 = (int*)(vector_obtener(v1,3));
    printf("V1 en pos:%d = %d\n",4,*elemento_en_4);

    vector_destruir(v1);


}


int main(){

    pruebas_vector();


    return 0;
}








