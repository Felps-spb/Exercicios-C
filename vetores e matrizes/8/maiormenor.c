#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int A[10];
    int maior, menor;
    for (int i = 0; i < 10; i++)
    {
        printf("atribua um valor a pos(%d) do vetor A : ", i);
        scanf("%d", &A[i]);
    }

    maior = A[0];
    menor = A[0];

    for (int i = 0; i < 10; i++)
    {
        if (A[i] > maior)
        {
            maior = A[i];
        }
        else if (A[i] < menor)
        {
            menor = A[i];
        }
    }

    printf("\nO maior elemento do vetor eh: %d", maior);
    printf("\nO menor elemento do vetor eh: %d", menor);
    return 0;
}