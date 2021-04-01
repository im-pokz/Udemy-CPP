#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    float sum, sub, divi, mult;
    int menu;
    
    printf("Digite dois valores:\n");
    scanf("%f %f", &x, &y);
    
    printf("Escolha a opção desejada: ");
	printf("1 - Soma\n");
	printf("2 - Diferenca\n");
	printf("3 - Divisao\n");
	printf("4 - Multiplicacao\n");
    scanf("%d", &menu);
    switch(menu) {
        case 1:
        sum = x + y;
        printf("Valor da soma: %.2f", sum);
        break;
        
        case 2:
        sub = x - y;
        printf("Valor da diferenca: %.2f", sub);
        break;
        
        case 3:
        divi = x / y;
        printf("Valor da divisao: %.2f", divi);
        break;
        
        case 4:
        mult = x * y;
        printf("Valor da multiplicacao: %.2f", mult);
        break;
        
        default:
        printf("Valor inválido");
        break;
    }

    return 0;
}
