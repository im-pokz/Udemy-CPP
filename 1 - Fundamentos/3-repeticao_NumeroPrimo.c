#include <stdio.h>

int main()
{
    int num, den = 1, cont = 0, divi;
    
    printf("Digite um número: \n");
    scanf("%d", &num);
    
    while (den <= num) {
        if(num % den == 0) { 
            cont++; 
            den++;
        }
        else {
            den++;
        }
    }
    
    if(cont == 2) {
        printf("O número %d é primo", num);
    }
    else {
        printf("O número %d não é primo", num);
    }

    return 0;
}
