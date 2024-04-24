#include <stdio.h>
#include <math.h>

int main()
{
    int vetor[5], n = 5, i;
    float media, somaDiferencasQuadradas = 0.0;

    // Leitura dos elementos do vetor
    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    // Cálculo da média
    for (i = 0; i < n; i++)
    {
        media += vetor[i];
    }
    media /= n;

    // Cálculo da soma das diferenças quadradas em relação à média
    for (i = 0; i < n; i++)
    {
        somaDiferencasQuadradas += pow((float)vetor[i] - media, 2);
    }

    // Cálculo do desvio padrão
    float desvioPadrao = sqrt(somaDiferencasQuadradas / n);

    // Impressão dos resultados
    printf("\nMédia: %.2f\n", media);
    printf("Desvio Padrão: %.2f\n", desvioPadrao);

    return 0;
}