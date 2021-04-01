#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;
    float multi;
    
    printf("Digite os valores:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    multi = n1 * n2 * n3;
    
    printf("Valor da multiplicacao: %.2f", multi);

    return 0;
}
