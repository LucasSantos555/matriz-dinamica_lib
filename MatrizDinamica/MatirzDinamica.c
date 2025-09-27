#include "matrizDinamica.h"
int alocaMatriz(matriz *arrays)
{

    arrays->matriz = (int**)malloc(sizeof(int*)*arrays->linha);
    if(arrays->matriz == NULL)
            return 1; //ERRO
    for(int i=0;i<arrays->coluna;i++){
        arrays->matriz[i] = (int*)malloc(sizeof(int)*arrays->coluna);

    }
    return 0; //Sucesso
}


int preencheMatriz(matriz *arrays)
{

    if(arrays->matriz == NULL)
            return 1; //ERRO
 for(int i=0;i<arrays->linha;i++){
        for(int j=0;j<arrays->linha;j++){
              printf("Digite um valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &arrays->matriz[i][j]);
        }

 }
 return 0; //Sucesso
}

int ExibeMatriz(matriz *arrays)
{
    if(arrays->matriz==NULL) return 1;//ERRO
    for(int i=0;i<arrays->linha;i++){
        for(int j=0;j<arrays->coluna;j++){
            printf("%d ", arrays->matriz[i][j]);

        }
        printf("\n");
    }
    return 0;
}

