#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n1;
    float somatorio = 0;
    printf("\tCALCULADORA HAMORNICA\n");

    printf("Digite um valor final da sequencia: ");
    scanf("%d", &n1);

    for (int i = 1; i <= n1; i++)
    {

        somatorio += 1.0 / i;
    }
    printf("o valor da sequencia H(%d) eh: %.6f", n1, somatorio);

    return 0;
}