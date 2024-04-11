#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i = 0;
    int mult = 1;

    while (i < 5){
        if (mult % 3 == 0 && mult > 0)
        {
            printf("%d \n",mult);
            i++;
        }

     mult++;


    }
        return 0;
}