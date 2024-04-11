#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cont = 0, soma = 0, divi = 0, i = 1;
    float nota, media;
    printf("\t VALIDACAO DE NOTAS \n)");

    printf("digite suas notas (digite -1 para sair): \n");

    while (i > cont)
    {
        printf("nota : ");
        scanf("%f", &nota);

        if (nota >= 10 && nota <= 20)
        {
            soma += nota;
            divi++;
        }

        else if (nota < 10 || nota > 20)
        {
            printf("valor invalido como nota de aprovacao \n");
            cont++;
        }
    }
    media = soma / divi;
    printf("sua media aritmetica eh de: %.2f ", media);

    return 0;
}
