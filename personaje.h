#ifndef PERSONAJE_H
#define PERSONAJE_H
#define MAX_PERSONAJES 5

#include <stdio.h>

struct Personaje{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;

} personajes[MAX_PERSONAJES];

unsigned int cont=0;
void capturar_personaje(){
    if(cont<5){
        printf("\n Nombre del personaje: ");
        fflush(stdin);
        fgets(personajes[cont].nombre, 20,stdin);
        printf(" Tipo del personaje: ");
        fflush(stdin);
        fgets(personajes[cont].tipo, 20,stdin);
        printf(" Fuerza: ");
        scanf("%f",&personajes[cont].fuerza);
        printf(" Salud: ");
        scanf("%i",&personajes[cont].salud);
        cont++;
    }
    else{
        printf("\n Lo sentimos, limite de personajes alcanzado.");
    }


}

void mostrar_personaje(){
    printf("\n Lista de personajes: ");
    if(cont!=0){
        for(size_t i=0; i<cont; i++){
            printf("\n Personaje %i:\n\n",i+1);
            printf(" Nombre: %s",personajes[i].nombre);
            printf(" Tipo: %s",personajes[i].tipo);
            printf(" Fuerza: %.2f",personajes[i].fuerza);
            printf("\n Salud: %i",personajes[i].salud);
        }
        printf("\n");
    }
    else{
        printf("\n No hay personajes registrados");
    }
}

#endif