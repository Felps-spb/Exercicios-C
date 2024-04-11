#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int numero, numerof, calc;

    printf("\t MEDIA DE 10 NUMEROS \n");

    for (int i = 0; i < 10; i++)
    {
        printf("digite um valor: ");
        scanf("%d", &numero);
        numerof += numero;
    }

    calc = numerof / 10;

    printf("A media dos 10 numeros eh: %d \n", calc);

    return 0;
}