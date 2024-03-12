#include <stdio.h>

int main(){
	
	int horai, minutoi, segundoi, segundo2, horariosegundos, horaf, minf, segundof, dias, horaff;
	
	printf("\t Digite o horario inicial \n");
	
	scanf("%d:%d:%d",&horai,&minutoi,&segundoi);
	
	printf("Seu horario eh: %d:%d:%d\n",horai,minutoi,segundoi);
	
	printf("\t horario em segundos \n");
		scanf("%d",&segundo2);
		
	horariosegundos = segundo2 + segundoi + minutoi*60 + horai*3600;
	
	horaf = horariosegundos/3600;
	minf = (horariosegundos%3600)/60;
	segundof = horariosegundos%60;
	
	if(horaf >= 24){
	    
	    dias = horaf/24;
	    
	    horaff = horaf%24;
	    
	    printf("O horario de termino da experiencia eh: %d dias e %02d:%02d:%02d \n",dias, horaff, minf, segundof);
	    
	} else{
	    
	    printf("O horario de termino da experiencia eh: %02d:%02d:%02d \n", horaf, minf, segundof);
	}
	
	return 0;
}


