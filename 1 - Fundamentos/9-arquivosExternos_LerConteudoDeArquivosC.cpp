#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){

    // Cursor que ira percorrer cada letra
    int c;
    char conteudoTexto[255];

    //Arquivo a ser lido
    FILE *file;

    //Abre o arquivo no diretorio escolhido
    file = fopen("Texto.txt", "r");

    //Se o arquivo for encontrado
    if(file) {

        int cont = 0;

        //Enquanto encontra letras (ate o fim do arquivo)
        while((c = getc(file)) != EOF) {
            printf("%c", c);

            //Vetor de char recebe a letra atual
            conteudoTexto[cont] = c;

            cont++;
        }

        //Fecha o arquivo
        fclose(file);
    }

    //Imprimindo conteudo lido
    for(cont = 0; cont < strlen(conteudoTexto) - 2; cont++){
        printf("%c", conteudoTexto[cont]);
    }


    return 0;
}
