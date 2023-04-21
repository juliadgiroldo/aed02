#include <stdio.h>
#include <stdlib.h>
#include "questao2.h"

int main(){
	
	questao2();
	
	return 0;
}

void entrada2(float *nota1, float *nota2){
	
	printf("Digite a primeira nota:");
	scanf("%f", nota1);
	
	printf("Digite a segunda nota:");
	scanf("%f", nota2);
	
}

void processamento2(float *nota1, float *nota2, float *saida){
	
	*saida = (*nota1 + *nota2)/2;
	
}

void saida2(float saida){
	
	printf("A nota final e: %.1f", saida);
	
}

void questao2(){
	
	float n1;
	float n2;
	float res;
	
	entrada2(&n1, &n2);
	
	processamento2(&n1, &n2, &res);
	
	saida2(res);
}

