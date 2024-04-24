#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++)
    {
        printf("digite um valor a ser armazenado na pos %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}