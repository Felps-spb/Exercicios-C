#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, numerof = 0, quantidade = 0;
    float media = 0.0;

    for (int i = 0; i < 10; i++)
    {
        printf("digite um valor(positivo): ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            numerof += numero;
            quantidade++;
        }
    }

    if (quantidade > 0)
    {
        media = numerof / quantidade;
    }

    if (quantidade > 0)
    {
        printf("A media dos numeros positivos eh: %.2f\n", media);
    }
    else
    {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}