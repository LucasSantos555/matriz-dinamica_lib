#include "matrizDinamica.h"
int main()
{
    int **matriz;
    int linha =3;
    int coluna = 3;
    matriz = alocaMatriz(linha, coluna);
    preencheMatriz(matriz, linha, coluna);

    ExibeMatriz(matriz, linha, coluna);
    return 0;
}
