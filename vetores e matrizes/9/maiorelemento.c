#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int A[5];
    int maior, menor, pos = 0, pos2 = 0, soma = 0, media;
    for (int i = 0; i < 5; i++)
    {
        printf("atribua um valor a pos(%d) do vetor A : ", i);
        scanf("%d", &A[i]);
        
        soma += A[i];
    }


    maior = A[0];
    menor = A[0];
    media = soma / 5;


    for (int i = 0; i < 5; i++)
    {
        if (A[i] > maior)
        {
            maior = A[i];
            pos = i;
        }
        else if (A[i] < menor)
        {
            menor = A[i];
            pos2 = i;
        }
    }

    printf("\nA media da soma dos vetores eh de: %d", media);
    printf("\nO maior elemento do vetor eh: %d na pos (%d)", maior, pos);
    printf("\nO menor elemento do vetor eh: %d na pos (%d)", menor, pos2);
    return 0;
}