#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n1 = 0;
    int soma = 0;

    for (int i = 0; i < 102; i++)
    {
        if (n1 % 2 == 0)
        {
            soma += n1;
        }
        n1++;
    }
    printf("A soma dos 50 numeros pares eh: \n");
    printf("%d", soma);

    return 0;
}