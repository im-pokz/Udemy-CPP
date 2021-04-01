#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleano();

int main() {
	
	//Definindo variaveis
	bool variavelBooleana;
	
	//variavel recebendo booleano
	variavelBooleana = retornaBooleano();
	
	if(variavelBooleana){
		printf("VERDADEIRO\n");
	}
	else{
		printf("FALSO!\n");
	}
	
	return 0;
}

bool retornaBooleano(){
	return true;
}