#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct palavra{
    int ordem;
    char letra;
    char text[255];
};

int main(){
    // Criar uma palavra
    struct palavra primeiraPalavra;

    //Modificando os campos
    primeiraPalavra.ordem = 10;
    primeiraPalavra.letra = 'p';
    strcpy(primeiraPalavra.text, "palavrinha");

    //Mostrando valores do struct
    printf("Ordem: %d, Primeira Letra: %c, Palavra: %s", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.text);

    //Fazndo uma lista de structs
    struct palavra listaDePalavras[3];
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 1;
    listaDePalavras[2].ordem = 2;
    listaDePalavras[0].letra = 'a';
    listaDePalavras[1].letra = 'b';
    listaDePalavras[2].letra = 'c';
    strcpy(listaDePalavras[0].text, "Massa");
    strcpy(listaDePalavras[1].text, "Legal");
    strcpy(listaDePalavras[2].text, "Bacana");

    //Percorrendo o vetor
    int i;
    for(i = 0; i < 3; i++){
        printf("\nOrdem: %d, Primeira Letra: %c, Palavra: %s", listaDePalavras[i].ordem, listaDePalavras[i].letra, listaDePalavras[i].text);
    }





    return 0;
}
