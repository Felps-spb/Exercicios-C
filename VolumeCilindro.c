#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main (){
 	
 	int raio,altura,res;
	
	printf("\t Calculo volume cilindro \n");
	
	printf("digite o valor do raio \n");
	scanf("%d",&raio);
	
		printf("digite o valor da altura \n");
	scanf("%d",&altura);
	
	res= (pow(raio,2))*3.14*altura;
	
	printf("O volume do cilindrto eh de: %d \n",res);
	
	return 0;  
	
} 
