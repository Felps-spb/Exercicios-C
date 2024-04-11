#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int par = 0, impar = 1, soma, mult;
    int n1, n2, v1;
    printf("\t SOMA DE NUMEROS PARES E MULT DE IMPARES EM UM INTERVALO DE TEMPO\n");

    printf("escolha uma opcao: \n");
    printf("1- soma de numeros pares\n");
    printf("2- multiplicacao de numeros impares\n");
    scanf("%d", &v1);

    switch (v1)
    {
    case 1:

        printf("digite dois valores: \n");
        printf("Digite o comeco da sequencia:");
        scanf("%d", &n1);
        printf("Digite o intervalo  :");
        scanf("%d", &n2);

        while (n1 <= n2)
        {
            if (n1 % 2 == 0)
            {
                printf("%d \n", n1);
                par += n1;
            }
            n1++;
        }

        printf(" a soma de todos os numeros pares foi de: %d \n", par);

        break;

    case 2:

        printf("digite dois valores: \n");
        printf("Digite o comeco da sequencia: :");
        scanf("%d", &n1);
        printf("Digite o intervalo :");
        scanf("%d", &n2);

        while (n1 <= n2)
        {
            if (n1 % 2 != 0)
            {
                printf("%d \n", n1);
                impar *= n1;
            }
            n1++;
        }

        printf(" o produto de todos os numeros impares (+os numeros digitados) foi de: %d \n", impar);

        break;

    default:
        printf("digite um valor valido \n");
        break;
    }

    return 0;
}