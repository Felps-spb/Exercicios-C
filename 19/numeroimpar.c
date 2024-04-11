#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n1;

    printf("digite um numero: ");
    scanf("%d", &n1);

    for (int i = 0; i < 10; i++)
    {
        if (n1 % 2 != 0)
        {
            printf("%d \n", n1);
        }
        n1++;
    }

    return 0;
}