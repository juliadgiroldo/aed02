#include <stdio.h>
#include <stdlib.h>
#include "questao4.h"

int main(){
	
	questao4();
	
	return 0;
	
}

void entrada4(float *salAntg, float *porc){
	
	printf("Digite seu salario atual:");
	scanf("%f", salAntg);
	
	printf("Digite o percentual de aumento:");
	scanf("%f", porc);
	
}

void processamento4(float *salAntg,float *porc,float *saida){
	
	*saida = *salAntg + (*salAntg * *porc)/100;
	
}

void saida4(float saida){
	
	printf("O salario novo e: %.2f", saida);
}

void questao4(void){
	
	float salarioAntg;
	float porcentagem;
	float salarioNovo;
	
	entrada4(&salarioAntg, &porcentagem);
	
	processamento4(&salarioAntg, &porcentagem, &salarioNovo);
	
	saida4(salarioNovo);
	
}

