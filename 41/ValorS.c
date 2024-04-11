#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, res = 0;

    for (int i = 0; i <= 50; i++)
    {
        res += (2 * i - 1) / i;
    }

    printf("%d ", res);

    return 0;
}