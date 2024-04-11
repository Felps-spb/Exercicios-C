#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tamanho, contagem = 0, total = 0;
    printf("\t sequencia de numeros pares \n ");

    printf("digite o tamanho da sequencia(limite de 1000): ");
    scanf("%d", &tamanho);

    if (tamanho > 1000)
    {
        printf("digite um valor valido \n");
    }
    else if (tamanho > 0 && tamanho <= 1000)
    {
        for (int i = 0; i <= tamanho; i++)
        {
            if (contagem % 2 == 0)
            {
                printf("%d \n ", contagem);
                total++;
            }
            contagem++;
        }
        printf("foram digitados: %d numeros pares", total - 1);
    }

    return 0;
}