
#include <stdio.h>
#include <stdlib.h>

#ifndef MATRIZDINAMICA
#define MATRIZDINAMICA

typedef struct{
    int **matriz;
    int linha;
    int coluna;
}matriz;

int alocaMatriz(matriz *arrays);
int preencheMatriz(matriz *arrays);
int ExibeMatriz(matriz *arrays);





#endif // MATRIZDINAMICA
