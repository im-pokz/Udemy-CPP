#include <stdio.h>
#include <stdlib.h>

int* alocaVetor();

int main(){

    //
    int *vetor, tamanho, i;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereco de memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);
    vetor[0] = 0;
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;

    for (i = 0; i < tamanho; i++) {
        vetor[i] = 90;
    }

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}

int* alocaVetor(int tamanho){
    // Criando um ponteiro auxiliar
    int *aux;

    //Alocacao dinamica de memoria
    aux = (int*) (malloc(tamanho * sizeof(int)));

    return aux;
}
