#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nf, valor = 0, soma = 0, soma2, diferenca;
    printf("\t  QUADRADOS DA SOMA \n");

    printf("digite o fim da sequencia: ");
    scanf("%d", &nf);

    for (int i = 0; i <= nf; i++)
    {
        soma += i;
        valor += pow(i, 2);
    }

    soma2 = pow(soma, 2);
    diferenca = soma2 - valor;
    printf("o quadrado da soma de 1 a %d eh: %d \n", nf, soma2);
    printf("a soma dos quadrados de 1 ate %d eh: %d\n", nf, valor);
    printf("a diferenca entre a soma e o quadrado da soma eh de: %d",diferenca);
    return 0;
}