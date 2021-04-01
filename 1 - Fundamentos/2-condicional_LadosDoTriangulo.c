#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ladoA, ladoB, ladoC;
    
    printf("Digite os lados:\n");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
    
    if((ladoA == ladoB) && (ladoB == ladoC)){
        printf("Triangulo é equilátero");
    }else {
        if((ladoA == ladoB) || (ladoB == ladoC) || ladoA == ladoC) {
            printf("Triangulo é isóceles");
        }else {
            printf("Triangulo é escaleno");
        }
    }

    return 0;
}
