#include<stdio.h>
#include<stdlib.h>
#include"questao06.h"

int main() {
    questao06();
    return 0;
}

void entrada6(float *valorAntigo, float *valorNovo) {
    printf("Informe o valor antigo do produto: ");
    scanf("%f", valorAntigo);

    printf("Informe o valor novo do produto: ");
    scanf("%f", valorNovo);
}

void processamento6(float *valorNovo, float *valorAntigo, float *aument) {
    *aument = ((*valorNovo - *valorAntigo)/ *valorAntigo) * 100.0;
}

void saida6(float aument) {
    
    printf("O produto aumentou em %.2f%% ", aument);
}
void questao06(void) {
    float valorAnt, valorNv, aumento;

    entrada6(&valorAnt, &valorNv);
    processamento6(&valorNv, &valorAnt, &aumento);
    saida6(aumento);
}


