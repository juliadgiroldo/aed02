#include <stdio.h>
#include "questao20.h"
int main(){
	
	questao20();
	
	return 0;
}

void entrada20(int *n1, int *n2, int *n3){
	
	printf("Digite o primeiro valor: ");
	scanf("%d", n1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", n2);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", n3);	
}

void processamento20(int *n1, int *n2, int *n3, int *saida){
	
	if (*n1 == *n2 && *n2 == *n3){
		*saida = 1;
	}
	else if(*n1 > *n2 && *n1 > *n3){
		
		*saida = *n1;
	}
	else if(*n2 > *n1 && *n2 > *n3){
		
		*saida = *n2;
	}
	else{
		
		*saida = *n3;
	}
}
	
void saida20(int saida){
	
	if(saida == 1){
		printf("Numeros identicos");
	}
	else{
		printf("Maior numero: %d\n", saida);
	}

}

void questao20(void){
	
	int num1, num2, num3, res;
	
	entrada20(&num1, &num2, &num3);
	processamento20(&num1, &num2, &num3, &res);
	saida20(res);
}
