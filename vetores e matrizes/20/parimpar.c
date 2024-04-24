#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int total[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int impar[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 10; i++)
    {
        printf("digite valores no intervalo de 0-50: ");
        scanf("%d", &total[i]);

        if (total[i] > 50)
        {
            printf("valor invalido, digite um valor valido \n");
            printf("digite valores no intervalo de 0-50: ");
            scanf("%d", &total[i]);
        }
    }
    // atribuicao dos impares no segundo vetor
    for (int i = 0; i < 10; i++)
    {
        if (total[i] % 2 != 0)
        {
            impar[i] += total[i];
        }
    }
    
    // valores par
    for (int i = 0; i < 10; i++)
    {
        if (total[i] % 2 == 0)
        {
            printf("%d ", total[i]);
        }
    }

    printf("\n");

    // valores impar
    for (int i = 0; i < 10; i++)
    {
        if (total[i] % 2 != 0)
        {
            printf("%d ", impar[i]);
        }
    }

    return 0;
}