#include <stdio.h>

int main()
{
    int vet[3], vet2[3], media, media2;
    
    printf("Digite os valores: \n");
    printf("Valor 1: ");
    scanf("%d", &vet[1]);
    printf("Valor 2: ");
    scanf("%d", &vet[2]);
    printf("Valor 3: ");
    scanf("%d", &vet[3]);
    
    printf("Valor da media: ");
    media = (vet[1] + vet[2] + vet[3]) / 3;
    printf("%d", media);
    
    int i;
    for(i = 0; i < 3; i++){
        printf("\nDigite um valor para a posição vetor[%d]", i);
        scanf("%d",&vet2[i]);
        media2 = media2 + vet2[i];
    }
    printf("\n Média: %d", media2/3);
    
    return 0;
}
