#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(){

    //Cria o objeto do arquivo
    ofstream meuArquivo;

    meuArquivo.open("Texto.txt");

    meuArquivo << "";

    meuArquivo.close();

    return 0;
}
