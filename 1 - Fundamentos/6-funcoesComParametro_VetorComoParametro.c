#include <stdio.h>
#include <stdlib.h>

void imprimeVetor();
void modificaVetor();

int main(){
	int v[3] = {1, 2, 3};
	
	imprimeVetor(v, 3);
	
	modificaVetor(v, 3);
	
	imprimeVetor(v, 3);
	
	return 0;
}

void imprimeVetor(int *vetor, int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		printf("%d \n", vetor[i]);
	}
}

void modificaVetor(int *vetor, int tamanho){
	int i;
	
	for(i = 0; i < tamanho; i++){
		vetor[i] += 1;
	}
}