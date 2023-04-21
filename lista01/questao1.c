#include <stdio.h>
#include <stdlib.h>
#include "questao1.h"

void entrada1(int *num1, int *num2, int *num3){
	printf("Digite o primeiro numero:");
	scanf("%d", num1);
	
	printf("Digite o segundo numero:");
	scanf("%d", num2);
	
	printf("Digite o teceiro numero:");
	scanf("%d", num3);
}

void processamento1(int *num1, int *num2,int *num3, int *saida ){

	*saida = (*num1 + *num2 + *num3);
}

void saida1(int saida){
	printf("Resultado: %d", saida);
}

void questao1(void){
	int n1;
	int n2;
	int n3;
	int res;
	
	entrada1(&n1, &n2, &n3);
	
	processamento1(&n1, &n2,&n3, &res);
		
	saida1(res);
}

