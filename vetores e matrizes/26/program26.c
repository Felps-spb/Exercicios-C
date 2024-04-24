#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int numero = 1;
    int A[100] = {
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0
    };

    for (int i = 0; i < 100; i++)
    {
        if (numero % 7 != 0 && numero % 10 != 7)
        {
            A[i] += numero;
            printf("%d ", A[i]);
        }
        numero ++;
    }

    return 0;
}