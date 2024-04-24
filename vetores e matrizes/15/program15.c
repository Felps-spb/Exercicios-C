#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int vetor[10], i, j;

    // Leitura dos 10 números do usuário
    printf("Digite 10 numeros inteiros: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    // Verificando valores iguais
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("\nValor igual encontrado: %d na posicao %d e %d", vetor[i], i + 1, j + 1);
            }
        }
    }

    return 0;
}