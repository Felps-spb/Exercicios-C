
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int A[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int n1, n2, v1, v2, soma;

    printf("\t ATRIBUICAO E SOMA DE VALORES NO VETOR \n");

    printf("digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("digite a posicao de alocacao do vetor  (8): ");
    scanf("%d", &v1);

    printf("digite o segundo numero: ");
    scanf("%d", &n2);

    printf("digite a posicao de alocacao do vetor (8): ");
    scanf("%d", &v2);

    A[v1] += n1;
    A[v2] += n2;

    soma = A[v1] + A[v2];

    printf("a soma dos valores atribuidos aos vetores de pos %d e %d eh: %d ", v1, v2, soma);

    return 0;
}