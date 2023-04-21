#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "questao15.h"

void entrada15(float *num1, float *num2) {
    printf("Digite um numero: ");
    scanf("%f", num1);
    printf("Digite um numero: ");
    scanf("%f", num2);
}

void processamento15(float *num1, float *num2, float *menor, float *maior) {
    *menor = *num1;
    *maior = *num1;
    if (*num2 > *maior) {
        *maior = *num2;
        *menor = *menor;
    } else if (*num2 < *menor) {
        *maior = *menor;
        *menor = *num2;
    } else {
        *maior = *menor;
        *menor = *maior;
    }
}

void saida15(float menor, float maior) {
    
    if (menor != maior) {
        printf("%.1f e menor %.1f", menor, maior);
    } else {
        printf("%.1f = %.1f", menor, maior);
    }
    
}
void questao15(void) {
    float n1, n2, mai, men;

    entrada15(&n1, &n2);
    processamento15(&n1, &n2, &men, &mai);
    saida15(men, mai);
}

int main() {
    questao15();
    return 0;
}
