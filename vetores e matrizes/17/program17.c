#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bubbleSort(int vetor[], int tamanho)
{
    int i, j, aux;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - i - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main()
{
    int op;
    int vet[6];
    do
    {
        printf("\n\t PROGRAMA DE VETORES \n");
        printf("1- Vetor ordem direta\n");
        printf("2- ordem inversa\n");
        printf("3- sair\n");
        scanf("%d", &op);

        if (op == 1)
        {
            for (int i = 0; i < 6; i++)
            {
                printf("atribua um valor a pos(%d) do vetor : ", i);
                scanf("%d", &vet[i]);
            }

            for (int i = 0; i < 6; i++)
            {
                printf("%d ", vet[i]);
            }
        }
        else if (op == 2)
        {
            for (int i = 0; i < 6; i++)
            {
                printf("atribua um valor a pos(%d) do vetor : ", i);
                scanf("%d", &vet[i]);
            }

            for (int i = 5; i >= 0; i--)
            {
                printf("%d ", vet[i]);
            }
        }
        else if (op != 3)
        {
            printf("ERRO(Digite um valor valido)\n");
        }

    } while (op != 3);

    return 0;
}