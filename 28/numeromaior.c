#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int maior = -2147483648;
    int n1, contado, contagem = 0;
    printf("Digite um valor a ser contado: ");
    scanf("%d", &contado);

    for (int i = 1; i <= contado; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &n1);

        if (n1 > maior)
        {
            maior = n1;
        }

        if (n1 == maior)
        {
            contagem++;
        }
    }
    printf("o numero maior eh %d, ele apareceu %d vezes na contagem", maior, contagem);

    return 0;
}