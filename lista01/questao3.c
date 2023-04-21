#include <stdio.h>
#include <stdlib.h>
#include "questao3.h"

int main(){
	
	questao3();
	
	return 0;
}

void entrada3(float *nota1, float *nota2,int *peso1, int *peso2){
	
	printf("Digite a primeira nota:");
	scanf("%f", nota1);
	
	printf("Digite o peso da primeira nota:");
	scanf("%d", peso1);
	
	
	printf("Digite a segunda nota:");
	scanf("%f", nota2);
	
	printf("Digite o peso da segunda nota:");
	scanf("%d", peso2);
	
}

void processamento3(float *nota1, float *nota2,int *peso1, int *peso2, float *saida){
	
	*saida = ((*nota1 * *peso1)+(*peso2 * *nota2))/(*peso1 + *peso2);
	
}

void saida3(float saida){
	
	printf("A nota final e: %.1f", saida);
	
}

void questao3(){
	
	float n1;
	float n2;
	int p1;
	int p2;
	float res;
	
	entrada3(&n1, &n2, &p1, &p2);
	
	processamento3(&n1, &n2,&p1, &p2, &res);
	
	saida3(res);
}

