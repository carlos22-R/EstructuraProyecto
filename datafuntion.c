
#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"

/*Hace el cambio de variable*/
void sswap(int *punteroUno, int *puntoDos) {
    int conten;
    conten = *punteroUno;
    *punteroUno = *puntoDos;
    *puntoDos = conten;
}

/*Algoritmo de burbuja*/
void boobleSort(int vector[], int tamanio) {
    int recorrido, comprobacion;
    for (recorrido = 0; recorrido < tamanio; recorrido++) {
        for (comprobacion = 0; comprobacion < tamanio - 1; comprobacion++) {
            if (vector[comprobacion] > vector[comprobacion + 1]) {
                sswap(&(vector[comprobacion]), &(vector[comprobacion + 1]));
            }
        }
    }
}

/*Imprimir*/
void printArray(int *puntero, size_t tamanio) {
    printf("\n");
    for (int i = 0; i < tamanio; i++) {
        printf("%d - ", *(puntero+i));
    }
}

/*Da vuelta al vector*/
void reverse(int vector[], int tamanio){
    int temp = 0;
    for (int i = 0; i < tamanio / 2; i++)
    {
        temp = vector[i];
        vector[i] = vector[(tamanio - 1) - i];
        vector[(tamanio - 1) - i] = temp;
    }
}
