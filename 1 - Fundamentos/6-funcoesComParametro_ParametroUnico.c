#include <stdio.h>
#include <stdlib.h>

void mostraSucessor();
int retornaAntecessor();

int main(){
	
	int a;
	
	printf("Digite um valor:");
	
	scanf("%d", &a);
	
	mostraSucessor(a);
	
	int b;
	
	printf("Digite outro valor:");
	
	scanf("%d", &b)
	
	printf("\nO antecessor de %d eh %d", a, retornaAntecessor(b));
	
	
	return 0;
}

void mostraSucessor(int numero){
	printf("O sucessor de %d eh %d", numero, numero + 1);
}

int retornaAntecessor(int numero){
	return numero - 1;
}
	