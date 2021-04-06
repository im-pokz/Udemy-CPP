#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM]){

    //Auxiliar contador
    int i;

    cout << "\n";

    for(i = 0; i < TAM; i++){
        cout <<" |" << vetor[i] << "| ";
    }
}

void shellSort(int vetor[TAM]){

    int i, j, atual;
    int h = 1;

    //De quantos em quantos sera o pulo entre analises
    while(h < TAM){
        h = 3*h + 1;
    }

    while(h > 1){
        //Reduz as distancias entre as analises
        h = h / 3;

        for(i = h; i < TAM; i++){

        //Elemento atual em analise
        atual = vetor[i];

        //Elemento anterior ao analisado
        j = i - h;

    //Analisando membros anteriores
    while((j >= 0) && (atual < vetor[j])) {

        //Posiciona os elementos uma posicao para frente
        vetor[j + h] = vetor[j];
        //Faco o j andar para tras
        j = j - h;
    }

    //Agora que o espaco foi aberto, colocamos o atual (menor numero), na posicao correta
    vetor[j + h] = atual;

    imprimeVetor(vetor);
    }
  }
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    shellSort(vetor);

    imprimeVetor(vetor);

    return 0;
}
