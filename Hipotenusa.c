#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main (){
	
	int c1,c2,hipo;
	
	
	printf("\t Descobridor de Hipotenusa \n");
	
	printf("digite o valor do cateto A: \n");
	scanf("%d",&c1);
	
	printf("digite o valor do cateto B: \n");
	scanf("%d",&c2);
	
	hipo = sqrt((pow(c1,2))+(pow(c2,2)));
	 
	printf("O valor da hipotenusa eh de: %d \n", hipo);
	
	return 0;  
}
