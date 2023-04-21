#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"


void entrada18(float *num1, float *num2) {
		printf("Informe a 1 nota:");
		scanf("%f", num1);
        printf("Informe a 2 nota:");
        scanf("%f", num2);
}

void processamento18(float *num1, float *num2, float *saida) {
    *saida = (*num1 + *num2)/2;
}

void saida18(float saida) {
    printf("Media final: %.1f \n", saida);
    if (saida >= 7){
        printf("Aprovado");
    } else if (saida < 3){
        printf("Reprovado");
    } else {
        printf("Prova Final");
    }
}

void questao18(void){
    float n1, n2, media;

	entrada18(&n1, &n2);

	processamento18(&n1, &n2, &media);

	saida18(media);
}

int main(){
	questao18();
	
	return 0;
}

