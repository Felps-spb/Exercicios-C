#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 6; i++)
    {
        printf("digite um valor para ser atribuido: ");
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}