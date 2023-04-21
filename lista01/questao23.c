#include <stdio.h>
#include "questao23.h"

int main(){
	questao23();
	return 0;
}

void entrada23(float *km, char *carro){
	printf("Digite o carro: ");
	gets(carro);
	
	printf("Digite os km: ");
	scanf("%f", km);
	
}
void processamento23(float *km, char *carro,float  *saida){
	
	if(*carro == 'A' || *carro == 'a'){
		*saida = *km/8;
	}
	else if(*carro == 'B'|| *carro == 'b'){

		*saida = *km/9;
	}
	else if(*carro == 'C'|| *carro == 'c'){
		*saida = *km/12;
	}
	else{
		*saida = -1;
	}	
}
void saida23(float saida){
	
	if(saida == -1){
		printf("Esse carro � desconhecido");
	}
	else{
		printf("Aquantidade de gasolina usada e: %.2f", saida);
	}
}

void questao23(void){
	
	char car[3];
	float kmetro, res;
	
	entrada23(&car, &kmetro);
	processamento23(&car, &kmetro, &res);
	saida23(res);
}
