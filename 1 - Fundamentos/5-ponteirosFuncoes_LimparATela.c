#include <stdio.h>
#include <stdlib.h>

void limpaTela();

int main(){
	
	//Definindo variaveis
	int a;
	
	//Imprimindo alguma coisa
	printf("Digite um valor para 'a':");
	
	//Lendo o valor
	scanf("%d", &a);
	
	//Limpa a tela
    limpaTela();

    printf("Valor digitado foi: %d", a);	
	return 0;
}

void limpaTela(){
	system("CLS");
}