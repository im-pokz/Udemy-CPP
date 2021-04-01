#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    int diferenca;
    
    printf("Digite os valores:\n");
    scanf("%d %d", &n1, &n2);
    
    diferenca = n1 - n2;
    
    printf("Valor absoluto da diferenca: %d", abs(diferenca));

    return 0;
}
