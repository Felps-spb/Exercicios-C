#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1;
    printf("Digite um numero: ");
    scanf("%d", &n1);

    for (int i = 0; i <= 1000; i++)
    {
        if (n1 % 11 == 0 || n1 % 13 == 0 || n1 % 17 == 0)
        {
            printf("%d ", n1);
            break;
        } 
        
        n1++;
    }

    return 0;
}