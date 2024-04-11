#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, soma;
    printf("\t DIVISORES DE UM NUMERO \n");

    printf("digite um numero: ");
    scanf("%d", &n1);

    for (int divisor = 1; n1 >= divisor; divisor++)
    {
        if (n1 % divisor == 0)
        {
            printf("%d ", divisor);
            soma += divisor;
        }
    }
    printf("\na soma dos divisores eh de: %d ", soma - n1);
    return 0;
}