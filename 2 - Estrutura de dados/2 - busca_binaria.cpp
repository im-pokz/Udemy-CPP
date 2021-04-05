#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std; //para utilizar cout

void imprimeVetor(int vetor[TAM]){

    int cont;

    //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
       cout << vetor[cont] << " - ";
    }
}

int buscaSimples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

    //Auxiliar contador
    int cont;

    //Verifica se o valor foi encontrado
    bool valorFoiEncontrado;

    //Percorre a lista em busca do valor
    for(cont = 0; cont < TAM; cont++){
        if(vetor[cont] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = cont ;
        }
    }

    if(valorFoiEncontrado){
        return 1;
    }else{
        return -1;
    }
}

int buscaBinaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

    int esquerda = 0;         //Limite da esquerda
    int direita = TAM - 1;    //Limite da direita
    int meio;                 //Limite do meio onde fica o cursor

    while(esquerda <= direita){

    //Encontra o mio da analise
    meio = (esquerda + direita) / 2;

    //Quando o valor do meio � encontrado
    if(valorProcurado == vetor[meio]){
        *posicaoEncontrada = meio;
        return 1;
    }
    //Ajustando os limites laterais
    if(vetor[meio] < valorProcurado){
        esquerda = meio + 1;
    }else{
        direita = meio - 1;
    }
}

return -1;
}


int main(){

    int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
    int valorProcurado;
    int posicao, posicaoEncontrada;

    //Imprime o vetor na tela
    imprimeVetor(vetor);

    //Lendo o numero buscado
    printf("\nQual numero deseja encontrar? ");
    scanf("%d", &valorProcurado);

    if(buscaBinaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor foi encontrado na posicao:" << posicaoEncontrada;
    }else{
        cout << "Valor nao encontrado";
    }



    return 0;

}