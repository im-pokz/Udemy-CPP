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

//Junta os subarrays criados ao dividir o vetor principal
void merge(int vetor[TAM], int indiceEsquerdo, int meio, int indiceDireito){

    int i, j, k; // Auxiliares contadores
    int n1 = meio - indiceEsquerdo + 1; // Tamanho do primeiro vetor auxiliar
    int n2 = indiceDireito - meio + 1; // Tamanho do segundo vetor auxiliar

    //Cria dois arrays temporarios
    int vetorEsquerdo[n1], vetorDireito[n2];

    //Passa os elementos do vetor principal para o primeiro vetor auxiliar (esquerda)
    for(i = 0; i < n1; i++){
        vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
    }

    //Passa os elementos do vetor principal para o segundo vetor auxiliar (direita)
    for(j = 0; j < n2; j++){
        vetorDireito[j] = vetor[meio + 1 + j];
    }

    //Reseta as variaveis
    i = 0;
    j = 0;
    k = indiceEsquerdo;

    while(i < n1 && j < n2){

        //Caso o valor na esquerda seja menor
        if(vetorEsquerdo[i] <= vetorDireito[j]){

            //Passo para o meu vetor principal o valor menor
            vetor[k] = vetorEsquerdo[i];

            //Incrementa o auxiliar para passar a analise para os proximos valores do vetor auxiliar
            i++;
        }else{

            //Passo para o meu vetor principal o valor menor
            vetor[k] = vetorDireito[j];

            //Incrementa o auxiliar para passar a analise para os proximos valores do vetor auxiliar
            j++;
        }

        //Aumenta o indice de posicionamento do vetor
        k++;
    }

    //Se faltarem alguns elementos do array ESQUERDO, passa eles para o array PRINCIPAL
    while(i < n1){
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }

    //Se faltarem alguns elementos do array DIREITO, passa eles para o array PRINCIPAL
    while(j < n2){
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }

}

void mergeSort(int vetor[TAM], int indiceEsquerdo, int indiceDireito){
    if(indiceEsquerdo < indiceDireito){

        //Encontra o meio
        int meio = (int)(indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2);

        //Da metade para tras
        mergeSort(vetor, indiceEsquerdo, meio);

        //Da metade para frent
        mergeSort(vetor, meio + 1, indiceDireito);

        //Une os dois subarrays que foram criados
        merge(vetor, indiceEsquerdo, meio, indiceDireito);

    }
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    imprimeVetor(vetor);

    mergeSort(vetor, 0, TAM - 1);

    imprimeVetor(vetor);

    return 0;
}
