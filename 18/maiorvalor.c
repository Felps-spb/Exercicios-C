#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int numero, maior, menor;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    menor = maior = numero;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &numero);

        if (numero < menor)
        {
            menor = numero;
        }
        if (numero > maior)
        {
            maior = numero;
        }
    }
printf("O maior valor lido eh %d \n", maior);
printf("O menor valor lido eh %d \n", menor);
    return 0;
}