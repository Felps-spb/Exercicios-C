#include <stdio.h>

int main()
{
    int n, i, j;
    float E = 1.0, fat = 1.0;

    // Leitura do valor de n
    printf("Digite um valor N inteiro e positivo: ");
    scanf("%d", &n);

    // Verificação da positividade de n
    if (n <= 0)
    {
        printf("O valor de N deve ser positivo.\n");
        return 1;
    }

    // Cálculo do valor de E
    for (i = 1; i <= n; i++)
    {
        fat *= i;
        E += 1.0 / fat;
    }

    // Exibição do valor de E
    printf("O valor de E com N = %d eh: %.6f\n", n, E);

    return 0;
}