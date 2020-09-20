#include <stdio.h>


void menu();
void capturar_enteros();

int main(){

    char op;

    do{
        menu();
        scanf("%c", &op);
        switch(op){
            case '1':  capturar_enteros();  break;
            case '2':
            case '3':
            default: break;
        }
        fflush(stdin);
    }while(op != '0');

    return 0;
}

void menu(){
    printf("\n Menu:");
    printf("\n 1) Capturar enteros");
    printf("\n 2) Mostrar cadena n veces");
    printf("\n 3) Agregar personaje");
    printf("\n 0) Salir");
    printf("\n Opcion: ");
}
void capturar_enteros(){
    int enteros[5];
    int  suma;
    float promedio;
    suma=0;
    printf("\n");
    for(size_t i=0; i<5; i++){
        printf(" Numero %d: ",i+1);
        scanf("%i", &enteros[i]);
    }
    printf("\n\n Numeros:\n");
    for(size_t i=0; i<5; i++){
        printf(" %d\n",enteros[i]);
    }
    for(size_t i=0; i<5; i++){
        suma+=enteros[i];
    }
    promedio=suma/5.0;
    printf("\n Suma: %i",suma);
    printf("\n Promedio: %f",promedio);
}