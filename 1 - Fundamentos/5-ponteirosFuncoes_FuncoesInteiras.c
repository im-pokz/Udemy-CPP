#include <stdio.h>
#include <stdlib.h>

//Definindo que a funcao existe
int retornaNumero();

float retornaQuebrado();

int main(){
	
	//Definindo Variaveis
	int a;
	
	//Passando o retorno de uma funcao para uma variavel
	a = retornaNumero();
	
	//Imprimindo valor de a
	printf("%d", a);
	
	//Definindo um float
	float b;
	
	b = retornaQuebrado();
	
	printf("\n%f", b);
	
	return 0;
}
	
//Funcao que retorna 10
int retornaNumero(){
	printf("\n Oi galera! \n");
	int numero = 100;
	return numero * 10;
}

//Retorna um numero quebrado
float retornaQuebrado(){
	return 5.5;
}