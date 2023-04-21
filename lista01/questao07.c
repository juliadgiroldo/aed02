#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "questao7.h"

int main() {
    questao();

    return 0;
}

void entrada7(float *raio) {
    printf("Informe o raio do circulo em cm: ");
    scanf("%f", raio);
}

void processamento7(float *raio, float *diametro, float *perimetro, float *area, float *volumeEsfera){
    float pi = 3.14;
    
    *diametro = 2* *raio;
    *perimetro = 2.0 * pi* *raio;
    *area = pi* pow(*raio, 2);

    
    *volumeEsfera = (4.0/3.0)*pi * pow(*raio, 3);
}

void saida7(float *diametro, float *perimetro, float *area, float *volumeEsfera){
    system("cls");

    printf("Diametro: %.2f cm", *diametro);
    printf("\nPerimetro: %.2f cm", *perimetro);
    printf("\nArea: %.2f cm^2", *area );
    printf("\nCaso esse circulo fosse base para uma esfera, o volume seria: %.2f cm^3", *volumeEsfera);
}

void questao07(void) {
    float r, diamet, perimet, are, volEsfera;

    entrada7(&r);
    processamento7(&r, &diamet, &perimet, &are, &volEsfera);
    saida7(diamet, perimet, are, volEsfera);
}

