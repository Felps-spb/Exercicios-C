#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, divisor = 1;
    printf("\t DIVISORES DE UM NUMERO \n");

    printf("digite um numero: ");
    scanf("%d", &n1);

    while (n1 >= divisor)
    {
        if (n1 % divisor == 0)
        {
            printf("%d ", divisor);
        }

        divisor++;
    }

    return 0;
}