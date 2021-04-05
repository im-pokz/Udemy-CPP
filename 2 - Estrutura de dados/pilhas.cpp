#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

//Imprime a pilha
void imprimeVetor(int vetor[TAM], int topo){

    //Auxiliar contador
    int cont;

    cout << "\n";

    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }

    cout <<"Topo: " << topo;
}

//Confere se a pilha esta vazia
bool pilhaVazia(int topo){
    if(topo == -1){
        return true;
    }else{
        return false;
    }
}

//Confere se a pilha esta cheia
bool pilhaCheia(int topo){
    if(topo == TAM - 1){
        return true;
    }else{
        return false;
    }
}

//Retorna o tamanho da pilha
int pilhaTamanho(int topo){
    return topo + 1;
}

//Retorna o ultimo valor da pilha
int pilhaGet(int pilha[TAM], int *topo){
    if(pilhaVazia(*topo)){
       cout << "A pilha esta vazia";
       return 0;
    }else{
        return pilha[*topo];
    }
}

//Adiciona um valor na pilha
void pilhaPush(int pilha[TAM], int valor, int *topo){

    //Caso nao possa colocar mais valores
    if(pilhaCheia(*topo)){
        cout << "Pilha cheia!";
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

//Remove um valor da pilha
void pilhaPop(int pilha[TAM], int *topo){

    //Verificar se a pilha esta vazia
    if(pilhaVazia(*topo)){
        cout << "A pilha está vazia";
    }else{
        cout << "\nValor removido: " << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

//Cria uma pilha e limpa ela
void pilhaConstrutor(int pilha[TAM], int *topo){

    //Coloca o topo negativo para indicar uma pilha vazia
    *topo = -1;

    //Auxiliar contador
    int cont;

    for(cont = 0; cont < TAM; cont++){
        pilha[cont] = 0;
    }
}

int main(){

    int pilha[TAM];
    int topo = -1;       // Topo da pilha
    int valorRetirado;

    pilhaConstrutor(pilha, &topo);

    imprimeVetor(pilha, topo);

    pilhaPush(pilha, 5, &topo);
    imprimeVetor(pilha, topo);

    cout << "\nTamanho da Pilha: " << pilhaTamanho(topo);

    pilhaPush(pilha, 11, &topo);
    pilhaPush(pilha, 16, &topo);
    pilhaPush(pilha, 9, &topo);
    pilhaPush(pilha, 5, &topo);
    pilhaPush(pilha, 3, &topo);
    pilhaPush(pilha, 2, &topo);
    pilhaPush(pilha, 10, &topo);
    pilhaPush(pilha, 3, &topo);
    pilhaPush(pilha, 7, &topo);

    imprimeVetor(pilha, topo);
    cout << "\nUltimo valor da pilha: " << pilhaGet(pilha, &topo);

    pilhaPop(pilha, &topo);
    imprimeVetor(pilha, topo);

    return 0;

}
