#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, total1 = 0, total2 = 0, v1, calc;

    printf("\t calculadora de sequencia \n");

    printf("escolha uma opcao: \n");
    printf("1- 1 em 1\n");
    printf("2- subtraindo do maior\n");
    printf("3- 2 em 2 \n");
    scanf("%d", &v1);

    switch (v1)
    {
    case 1:
        printf("digite o fim da sequencia: ");
        scanf("%d", &n1);

        for (int i = 1; i <= n1; i++)
        {
            printf("%d \n", i);
            total1 += i;
        }

        printf("A soma de todos os numeros da sequencia de 1 a %d eh: %d", n1, total1);
        break;

    case 2:

        printf("digite o fim da sequencia: ");
        scanf("%d", &n1);

        for (int i = 1; i <= n1; i++)
        {
            if (i % 2 == 0)
            {
                
                total1 -= i;
            }
            else if (i % 2 != 0)
            {
                printf("%d ",i);
                total2 += i;
            }
        }

             calc = total2 + total1;

        printf("A soma de todos os numeros da sequencia de 1 a %d eh: %d", n1, calc);
        break;

    case 3:
        printf("digite o fim da sequencia: ");
        scanf("%d", &n1);

        for (int i = 1; i <= n1; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d \n", i);
                total1 += i;
            }
        }

        printf("A soma de todos os numeros da sequencia de 1 a %d eh: %d", n1, total1);
        break;

    default:
        break;
    }
    return 0;
}