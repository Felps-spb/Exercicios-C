#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float Alunomaior, Alunomenor, AlunoMaisalto, AlunoMaisbaixo;
    float numero[5] = {0, 0, 0, 0, 0};
    float altura[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++)
    {
        printf("insira ao numero do aluno %d: ", i + 1);
        scanf("%f", &numero[i]);

        printf("insira a altura do aluno: ");
        scanf("%f", &altura[i]);
    }

    Alunomaior = numero[0];
    Alunomenor = numero[0];
    AlunoMaisalto = altura[0];
    AlunoMaisbaixo = altura[0];

    for (int i = 0; i < 5; i++)
    {
        if (altura[i] > AlunoMaisalto)
        {
            AlunoMaisalto = altura[i];
            Alunomaior = numero[i];
        }
        else if (altura[i] < AlunoMaisbaixo)
        {
            AlunoMaisbaixo = altura[i];
            Alunomenor = numero[i];
        }
    }
    printf("O aluno de numero %.1f eh o mais alto: %.1f \n", Alunomaior, AlunoMaisalto);
    printf("O aluno de numero %.1f eh o mais baixo: %.1f \n", Alunomenor, AlunoMaisbaixo);

    return 0;
}