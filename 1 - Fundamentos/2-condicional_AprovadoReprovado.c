#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;
    float media;
    
    printf("Digite a nota 1:\n");
    scanf("%f", &n1);
    printf("Digite a nota 2:\n");
    scanf("%f", &n2);
    printf("Digite a nota 3:\n");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    if(media >= 7) { 
        printf("Aluno aprovado!");
    }else {
        printf("Aluno reprovado!");
    }

    return 0;
}
