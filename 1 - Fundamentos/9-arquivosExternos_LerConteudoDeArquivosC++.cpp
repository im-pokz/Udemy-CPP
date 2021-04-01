#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){

    //Dizer qual arquivo sera lido
    ifstream input("Texto.txt");

    //String que recebera o texto lido
    string textoLido;

    //Passa o texto do arquivo para a string
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //Mostrar o texto lido
    cout << textoLido;

    return 0;
}

