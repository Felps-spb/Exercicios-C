#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int A[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("atribua um valor a pos(%d) do vetor A : ", i);
        scanf("%d", &A[i]);

        if (A[i] % 2 == 0)
        {
            contador++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (A[i] % 2 == 0)
        {
            printf("%d ", A[i]);
        }
    }
    printf("\nforam atribuidos %d numeros pares", contador);
    return 0;
}