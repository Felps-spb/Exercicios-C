#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int c[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 10; i++)
    {
        printf("insira valores na pos(%d) do vetor A: ", i);
    scanf("%d", &a[i]);
}

for (int i = 0; i < 10; i++)
{
    printf("insira valores na pos(%d) do vetor B: ", i);
    scanf("%d", &b[i]);
}

for (int i = 0; i < 10; i++)
{
    if (i % 2 == 0)
    {
        c[i] = a[i];
    }
    else
    {
        c[i] = b[i];
    }
}

printf("\nVetor combinado:\n");
for (int i = 0; i < 10; i++)
{
    printf("%d ", c[i]);
}

return 0;
}