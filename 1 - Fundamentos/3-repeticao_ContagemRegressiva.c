#include <stdio.h>

int main()
{
    int j = 10;
    
    while(j >= 0) {
        printf("%d \n", j);
        j--;
    }
    
    j = 10;
    do {
        printf("%d \n", j);
        j--;
    }while(j >= 0);
    
    for (j = 10; j >= 0; j--) {
        printf("%d \n", j);
    }

    return 0;
}
