#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A[15];
    float media, contador = 0, soma;

    printf("\t MEDIA ALUNOS \n");

    for (int i = 0; i < 15; i++)
    {
        printf("atribua a nota do aluno de pos(%d): ", i);
        scanf("%f", &A[i]);
        soma += A[i];
        contador++;
    }

    media = soma / contador;

    printf("A media geral da sala eh de: %1.f", media);

    return 0;
}