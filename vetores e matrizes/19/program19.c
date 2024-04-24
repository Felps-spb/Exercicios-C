#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int vet[50] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 50; i++)
    {
        vet[i] += (i + 5 * i) % (i + 1);
    }

    for (int i = 0; i < 50; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}