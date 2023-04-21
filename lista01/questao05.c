#include<stdio.h>
#include<stdlib.h>
#include "questao5.h"

int main() {
	
    questao05();

    return 0;
}

void entrada5(float *salBase, int *dependente) {
    printf("Informe o salario base: ");
    scanf("%f", salBase);

    printf("Numeros de dependentes: ");
    scanf("%d", dependente);
}

void processamento5(float *salBase, float *salBruto, int *dependente) {

    *salBruto = *salBase + ((float) *dependente * 32.0);
    *salBruto = *salBruto - (*salBruto * 27.5)/100.0;
}

void saida5(float salBruto) {

    printf("Salario bruto R$%.2f", salBruto);
}

void questao05(void) {
    float salarioBase, salarioBruto;
    int dependentes;

    entrada5(&salarioBase, &dependentes);
    processamento5(&salarioBase,&salarioBruto, &dependentes);
    saida5(salarioBruto);
}

