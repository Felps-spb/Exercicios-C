#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int potencia;
    int A[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int B[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("\t ARMAZENAMENTO DE POTENCIAS \n");

    for (int i = 0; i < 10; i++)
    {
        printf("insira um valor: ");
        scanf("%d", &A[i]);

        potencia = pow(A[i], 2);

        B[i] += potencia;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
        printf("%d \n", B[i]);
    }

    return 0;
}