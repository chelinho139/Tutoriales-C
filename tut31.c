#include <stdio.h>
//Copyright Chelin Tutorials. All Rights Reserved
//http://chelintutorials.blogspot.com/
//Estructuras y Funciones

//nueva manera
typedef struct video{
    char titulo [41];
    int visitas;
    float tiempo;

}video_t;

//typedef struct video video_t;  vieja manera

//Esta funcion me crea un video
video_t crear_video(){
    //creo el nuevo video en blanco
    video_t nuevo_video;

    //asigno el titulo
    printf("\ningrese el nombre del video: ");
    fflush(stdin);
    gets(nuevo_video.titulo);

    //asigno el numero de visitas
    printf("\ningrese el numero de visitas: ");
    fflush(stdin);
    scanf(" %d",&nuevo_video.visitas);

    //asigno el tiempo
    printf("\ningrese el tiempo del video: ");
    fflush(stdin);
    scanf(" %f",&nuevo_video.tiempo);

    //devuevlo el video
    return nuevo_video;

}
//Esta funcion sirve para imprimir un video
void imprimir_video(video_t video){
    printf("%s , timepo: %g , visitas: %d \n",video.titulo,video.tiempo,video.visitas);
}

int main(void){
    //creo 2 videos
    video_t v1 = crear_video();
    video_t v2= crear_video();

    //imprimimo los videos
    imprimir_video(v2);
    imprimir_video(v1);

    return 0;
}




