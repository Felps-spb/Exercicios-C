#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float A[10];
    int soma = 0, contador = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("insira o valor do vetor(%d): ", i);
        scanf("%f", &A[i]);

        if (A[i] > 0)
        {
            soma += A[i];
        }
        else if (A[i] < 0)
        {
            contador++;
        }
    }

    printf(" a soma dos numeros positivos eh de: %d\n", soma);
    printf("foram inseridos %d numeros negativos", contador);

    return 0;
}