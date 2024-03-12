#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main (){
 	
 	float dias,des,res,total;
 	
 		printf("\t Trabalho x horas, com desconto \n")	;
 		
 		printf("quantos dias voce trabalhou \n");
 		scanf("%f",&dias);
 			
 	res = dias*30;
	des = res*0.08;
	total = res - des;
			
			printf("O seu salario liquido eh de: %.2f \n",total);
 			printf("voce teve um desconto de: %.2f \n",des);
 	
	return 0;  
	
} 
