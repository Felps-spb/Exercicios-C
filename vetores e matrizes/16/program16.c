#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int A[20];

    for (int i = 0; i < 20; i++)
    {
        printf("insira um valor da pos(%d): ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (A[i] == A[j])
            {
                printf(" elementos repetidos e eliminados, nas posicoes %d e %d : %d \n", i, j, A[i]);
                A[i] = 0;
                A[j] = 0;
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}