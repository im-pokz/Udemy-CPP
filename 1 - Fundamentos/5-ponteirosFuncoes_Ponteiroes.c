#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

//Váriavel
int a = 20;

//Imprimindo o valor de uma variavel
printf("Valor de a: %d \n", a);

//Imprimindo o endereço de uma variável
printf("Endereco de a: %d \n", &a);

//VARIÁVEIS ARMAZENAM VALORES
int b = 10;

//PONTEIROES ARMAZENAM POSIÇÕES DA MEMÓRIA
int *ponteiro;

//PONTEIRO RECEBENDO A POSIÇÃO NA MEMÓRIA DA VARIÁVEL
ponteiro = &b;

//Imprimindo o valor de uma variavel
printf("Valor de b: %d \n", b);

//* pode ser lido como "CONTEUDO APONTADO POR"
*ponteiro = 40;

//Imprimindo o valor de uma variavel
printf("Valor de b: %d \n", b);

return 0;

}