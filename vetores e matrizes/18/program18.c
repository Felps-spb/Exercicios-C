#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int vet[11] = {0,0,0,0,0,0,0,0,0,0,0};
    int x, mult;

    printf("digite um numero: ");
    
    scanf("%d", &x);

    for (int i = 0; i < 11; i++)
    {
        mult = x * i;
        vet[i] += mult;
    }

    for (int i = 0; i < 11; i++)
    {
        printf("%d ", vet[i]);
    }
    return 0;
}