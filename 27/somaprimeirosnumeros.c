#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1,soma;

    printf("Digite um valor inicial: ");
    scanf("%d", &n1);

    for (int i = 0; i <= n1; i++)
    {
        soma+=i;
    }
printf("A soma dos %d primeiros numeros naturais eh: %d\n", n1, soma);

    return 0;
}