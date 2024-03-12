#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
	
	int n1, n2, n3, res;
	
	printf("\t digite 3 valores: \n");
	
	printf("valor1: \n");
	scanf("%d",&n1);
	
	printf("valor2: \n");
	scanf("%d",&n2);
	
	printf("valor3: \n");
	scanf("%d",&n3);
	
	res = (pow(n1, 2)) + (pow(n2, 2)) + (pow(n3, 2));
	
	printf(" O resultado da soma dos quadrados eh: %d \n", res);
	
	return 0;
}
