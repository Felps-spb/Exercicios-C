#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int A[5] = {0, 0, 0, 0, 0};
    int B[5] = {0, 0, 0, 0, 0};
    int produto = 0;

    printf("\t produto escalar \n ");

    for (int i = 0; i < 5; i++)
    {
        printf("insira um valor no vetor A(%d): ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("insira um valor no vetor B(%d): ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        produto += A[i] * B[i];
    }

   printf("%d", produto);
    
    return 0;
}