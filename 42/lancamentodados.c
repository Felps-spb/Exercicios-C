#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lancamento, d1, d2, v1;
    printf("\t ***LANCAMENTO DE DADOS)*** \n");

    printf("escolha a quantidade de dados lancados: \n");

    printf("1- um dado \n");
    printf("2- dois dados \n");
    scanf("%d", &v1);
    switch (v1)
    {
    case 1:
        printf("numeros de lancamentos: ");
        scanf("%d", &lancamento);

        for (int i = 1; i <= lancamento; i++)
        {
            d1 = rand() % 6 + 1;
        }

        printf("o dado foi lancado %d vezes e teve como resultado final %d", lancamento, d1);
        break;
    case 2:

        printf("numeros de lancamentos: ");
        scanf("%d", &lancamento);

        for (int i = 1; i <= lancamento; i++)
        {
            d1 = rand() % 6 + 1;
            d2 = rand() % 6 + 1;
        }

        printf("os dados foram lancados %d vezes e tiveram como resultado final %d, %d \n", lancamento, d1, d2);

        if (d1 > d2)
        {
            printf("d1 > d2 \n");
        }
        else if (d2 > d1)
        {
            printf("d1 < d2 \n");
        }
        else
        {
            printf("d1 = d2 \n");
        }

    default:

        break;
    }

    return 0;
}