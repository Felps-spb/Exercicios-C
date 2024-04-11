#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sub;
    int numf;
    printf("digite um valor final de contagem: ");
    scanf("%d", &numf);

    for (int i = numf; i >= 0; i--)
    {
        printf("%d ", i);
    }

    return 0;
}