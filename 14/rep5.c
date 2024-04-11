#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int contagem = 0;

    for (int i = 0; i < 101; i++)
    {
        printf("%d \n", contagem);
        contagem += 1000;
    }

    return 0;
}