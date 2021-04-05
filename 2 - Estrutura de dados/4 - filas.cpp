#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM], int tamanho){

    //Auxiliar contador
    int cont;

    cout << "\n";

    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}

void filaConstrutor(int *frente, int *tras){
    *frente = 0;
    *tras = -1;
}

bool filaVazia(int frente, int tras){
    if(frente > tras){
        return true;
    }else{
        return false;
    }
}

bool filaCheia(int tras){
   if(*tras == TAM - 1){
        return true;
   }else{
        return false;
   }
}

void filaEnfileirar(int fila[TAM], int valor, int *tras){
   if(filaCheia(*tras)){
    cout << "Filha cheia";
   }else{
   *tras = *tras + 1;
   fila[*tras] = valor;
   }
}

void filaDesenfileirar(int fila[TAM], int *frente, int tras){
    if(filaVazia(*frente, tras)){
      cout << "Fila vazia";
    }else{
      cout << "O valor " << fila[*frente] << " foi removido";
      fila[*frente] = 0;
      *frente = *frente + 1;
    }
}

int filaTamanho(int tras, int frente){
    return (tras - frente) + 1;
}

int main(){

    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int frente, tras;
    int valor;

    filaConstrutor(&frente, &tras);

    filaEnfileirar(fila, 5, &tras);
    filaEnfileirar(fila, 7, &tras);

    filaDesenfileirar(fila, &frente, tras);

    filaEnfileirar(fila, 8, &tras);

    imprimeVetor(fila, filaTamanho(tras, frente));

    return 0;
}
