#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    float media;
    
    printf("Digite os valores:\n");
    scanf("%f %f", &n1, &n2);
    
    media = (n1 + n2)/  2;
    
    printf("Valor da media: %.2f", media);

    return 0;
}
