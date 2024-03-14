/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    
    int v[5];
    int i;
    
    for(i=0;i<5;i++){
    printf("insira um dado: \n");
    scanf("%d", &v[i]);   
    }  
    
    printf("Dados inseridos: \n");
    for (i=0;i<5;i++){
        
         printf("%d ", v[i]);
        
    }
    
}
