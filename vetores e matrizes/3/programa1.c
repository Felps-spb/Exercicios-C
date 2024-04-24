#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A[6] = {1, 0, 5, -2, 100, 7};

    int soma;

    soma = A[0] + A[5] + A[1];

    
    for (int i = 0; i < 6; i++)
    {
        printf("%d \n", A[i]);
    }
    


    return 0;
}