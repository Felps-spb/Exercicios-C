#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n1, n2, numero = 0, quantidade, vf = 0;

    printf("\t ****MULTIPLOS DE DOIS NUMEROS**** \n");

    printf("digite a quantidade de multiplos exibidas: ");
    scanf("%d", &quantidade);
    printf("digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("digite o segundo valor: ");
    scanf("%d", &n2);

    for (int i = 1; i <= 1000; i++)
    {

        if (numero % n1 == 0 || numero % n2 == 0)
        {
            printf("%d ", numero);
            vf++;
            if (vf == quantidade)
            {
                break;
            }
        }
        numero++;
    }

    return 0;
}