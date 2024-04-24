#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int A[6];
    for (int i = 0; i < 6; i++)
    {
        printf("atribua um valor a pos(%d) do vetor A : ", i);
        scanf("%d", &A[i]);

        if (A[i] % 2 != 0)
        {
            printf("numero invalido ! \n");
            A[i] = 0;
        }
    }

    for (int i = 5; i >= 0; i--)
    {
        if (A[i] != 0)
        {
            printf("%d ", A[i]);
        }
    }

    return 0;
}