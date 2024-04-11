#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, numerof = 0;

    printf("\t SOMA DE 10 ALGARISMOS \n");

    for (int i = 0; i < 10; i++)
    {
        printf("digite um valor: ");
        scanf("%d", &numero);
        numerof += numero;
    }
    printf("a soma de todos os algarismos eh de : %d", numerof);

    return 0;
}