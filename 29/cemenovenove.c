#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n1, uni, dez, cen;

    printf("Digite um valor entre 100 e 999: ");
    scanf("%d", &n1);

    if (n1 < 100)
    {

        printf("digite um valor valido \n");
    }
    else if (n1 >= 100 && n1 <= 999)
    {
        cen = n1 / 100;
        uni = n1 % 10;
        dez = (n1 % 100) / 10;

        printf("numero digitado : %d \n", n1);
        printf("unidade: %d\n", uni);
        printf("dezena: %d \n", dez);
        printf("centena: %d \n", cen);
    }

    return 0;
}