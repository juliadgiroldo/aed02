#include<stdio.h>
#include<stdlib.h>
#include"questao16.h"


void entrada16(float *salarioBruto) {
    printf("Informe o salario bruto: ");
    scanf("%f", salarioBruto);
}

void processamento16(float *salarioBruto, float *salarioLiq) {
    if (*salarioBruto < 2000.0) {
        *salarioLiq = *salarioBruto - *salarioBruto * 0.10;
    } else {
        *salarioLiq = *salarioBruto - *salarioBruto *0.20;
    }
}

void saida16(float salarioLiq) {
    
    printf("/nSalario liquido R$%.2f", salarioLiq);
}

void questao16(void) {
    float salBruto, salLiq;

    entrada16(&salBruto);
    processamento16(&salBruto, &salLiq);
    saida16(salLiq);
}

int main() {
    questao16();

    return 0;
}
