#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct fruta{
    string cor;
    string nome;
};

int main(){

    //Criando um ponteiro para o struct criado
    fruta *primeiraFruta = new fruta;

    //Modificando valorse
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    cout << "Fruta: " << primeiraFruta->nome << ", Cor: " << primeiraFruta->cor;

    //Criando uma lista de frutas
    fruta *ponteiroListaDeFrutas = new fruta[2];

    //Modificando valores
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Morango";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[1].nome = "Kiwi";

    int i;
    for(i = 0; i < 2; i++){
        cout << "\nFruta: " << ponteiroListaDeFrutas[i].nome << ", Cor: " << ponteiroListaDeFrutas[i].cor;
    }

    return 0;

}

