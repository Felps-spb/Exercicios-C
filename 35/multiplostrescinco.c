#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1 = 0, n2 = 0;

    for (int i = 0; i <= 1000; i++)
    {
        if (n1 % 5 == 0)
        {

            n2 += n1;
        }
        else if (n1 % 3 == 0)
        {
            n2 += n1;
        }

        n1++;
    }

    printf("\n o somatorio de todos os numeros multiplos de 5 eh: %d", n2 - 1000);

    return 0;
}