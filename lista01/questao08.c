#include<stdio.h>
#include<stdlib.h>
#include "questao8.h"


void entrada8(float *velocidade_kmH) {
    printf("Informe a velocidade do veiculo em km/h: ");
    scanf("%f", velocidade_kmH);
}

void processamento8(float *velocidade_kmH, float *velocidade_mS) {
    *velocidade_mS = *velocidade_kmH *3.6;
}

void saida8(float velocidade_mS) {
    
    printf("Convertida, a velocidade informada fica %.1f", velocidade_mS);
}

void questao08(void) {
    float kmH, mS;

    entrada8(&kmH);
    processamento8(&kmH, &mS);
    saida8(mS);
}

int main() {
	
    questao08();

    return 0;
}


