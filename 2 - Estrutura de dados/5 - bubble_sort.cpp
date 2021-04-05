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

void bubbleSort(int vetor[TAM]){

    //Auxiliares
    int x, y;
    int aux;

    //Valor da esquerda sendo analisado
    for(x = 0; x < TAM; x++){

        //Valor da direita sendo analisado
        for(y = x + 1; y < TAM; y++){

            imprimeVetor(vetor);

            //Confere se precisa fazer a troca de valores
            if(vetor[x] > vetor[y]){
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    bubbleSort(vetor);

    imprimeVetor(vetor);

    return 0;
}
