#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i = 1;
    int contagem = 10;

    printf("\t CONTAGEM REGRESSIVA\n");

    while (i < 11)
    {
        printf("%d \n", contagem);
        contagem -= 1;
        i++;
    }
    
    printf("\t FIM \n");
    return 0;
}