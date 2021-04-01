#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

int main(){
    int linhas = 3, colunas = 3, i, j;
    int **matriz;

    printf("Digite o numero de linhas:");
    scanf("%d", &linhas);
     printf("\nDigite o numero de colunas:");
    scanf("%d", &colunas);

    //Alocando as linhas
    matriz = (int**) new int[linhas];

    //Alocando a memoria para as colunas de cada linha
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) new int[colunas];
    }

    //Preenchendo valores e exibindo a matriz
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Libra a memoria
    free(matriz);

    return 0;
}




