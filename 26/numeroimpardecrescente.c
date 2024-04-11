#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1;

    printf("Digite um valor inicial: ");
    scanf("%d", &n1);

    for (int i = n1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}