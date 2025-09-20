#include "matrizDinamica.h"

int** alocaMatriz(int linha, int coluna){
    int **matriz = (int**)malloc(sizeof(int*)*linha);
    if(matriz != NULL){

    for(int i=0; i< linha;i++){

            matriz[i] = (int*)malloc(sizeof(int)*coluna);

    }

    }
    return matriz;

}

int preencheMatriz(int **matriz, int linha, int coluna){
   if(matriz == NULL){
    return 1;   //ERRO
   }
    for(int i=0; i< linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Digite um valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
      }

    return 0;   //Função bem sucedida

}

int ExibeMatriz(int ** matriz, int linha, int coluna){
 if(matriz == NULL){
    return 1; //Erro
 }
 for(int i=0;i<linha;i++){
            for(int j=0;j<coluna;j++){
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
    }
return 0;//Sucesso
}
