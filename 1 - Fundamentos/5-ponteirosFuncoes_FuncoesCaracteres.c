#include <stdio.h>
#include <stdlib.h>


char retornaLetra();
char retornaLetraASCII();

int main(){
	
	//Definindo variaveis
	char letra, letraASCII;
	
	letra = retornaLetra();
	
	printf("%c", letra);

    letraASCII = retornaLetraASCII();

    printf("%f", letraASCII);
	
	return 0;
}

char retornaLetra(){
	return 'x';
}

char retornaLetraASCII(){
  return 120;
}
