#include "matrizDinamica.h"
int main()
{


    matriz arrays;
    matriz *ptr;
    ptr = &arrays;
    arrays.linha = 2;
    arrays.coluna = 2;

alocaMatriz(ptr);
preencheMatriz(ptr);
ExibeMatriz(ptr);




    return 0;
}
