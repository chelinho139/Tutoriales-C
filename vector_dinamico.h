/*Chelin Tutorials 2012 - Todos los Derechos Reservados
http://www.chelintutorials.blogspot.com/
Autor: chelo_c@live.com
Se Permite el uso para Fines no Lucrativos*/

#ifndef VECTOR_DINAMICO_H_INCLUDED
#define VECTOR_DINAMICO_H_INCLUDED


typedef struct vector vector_t;

//Firmas de Funciones
//Crea el vector
vector_t* vector_crear(size_t tam_inicial);


/*Agrega un elemento en un determinado indice al vector
    me deuvuelve si hubo algun error o no.*/
bool vector_agregar(vector_t* vector, size_t indice,void* elemento);


//Devuelve el elemento en el indice
void* vector_obtener(vector_t* vector, size_t indice);


size_t vector_obtener_tam(vector_t* vector);

//Redimensiona el vector
//Devuelve si hubo algun error o no.
bool vector_redimensionar(vector_t* vector, size_t nuevotam);


//Libera la memoria pedida.
void vector_destruir(vector_t* vector);



#endif // VECTOR_DINAMICO_H_INCLUDED
