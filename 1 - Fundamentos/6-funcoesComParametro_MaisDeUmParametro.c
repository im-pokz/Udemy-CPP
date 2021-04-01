#include <stdio.h>
#include <stdlib.h>

void mostraSoma();
int retornaSoma();

int main(){
	
	int a = 5, b = 7;
	int c = 10, d = 20;
	
	mostraSoma(a, b);
	
	printf("\nA soma entre %d e %d eh %d", c, d, retornaSoma(c, d));	
	
	return 0;
}

void mostraSoma(int n1, int n2){
	printf("\nA soma entre %d e %d eh %d, n1, n2, n1 + n2);
}

int retornaSoma(int n1, int n2){
	return n1 + n2;
}
