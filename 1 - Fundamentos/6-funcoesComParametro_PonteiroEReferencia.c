#include <stdio.h>
#include <stdlib.h>

retornaComMaisDez();

int main(){
	
	int a = 5;
	
	printf("%d", a);
	
	a = retornaComMaisDez(a);
	
	printf("%d\n", a);
	
	aumentaDez(&a);
	
	printf("%d\n", a);
	
	return 0;
}

int retornaComMaisDez(int numero){
	return numero + 10;
}

void aumentaDez(int *numero){
	*numero += 10;
}
	