#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "questao12.h"


void entrada12(float *nota1, float *nota2) {
    printf("Digite a primeira nota: ");
    scanf("%f", nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2);
}

void processamento12(float *nota1, float *nota2, float *media, bool *situacao) {
    *media = (*nota1 + *nota2)/2.0;

    if (*media >= 7.0) {
        *situacao = true;
    } else {
        *situacao = false;
    }
}

void saida12(bool *situacao) {
    if (*situacao == true) {
        printf("Aluno aprovado!");
    } else {
        printf("Aluno reprovado :(");
    }
}

void questao12(void) {
    float n1, n2, mediaEscolar;
    bool situacao;

    entrada12(&n1, &n2);
    processamento12(&n1, &n2, &mediaEscolar, &situacao);
    saida12(&situacao);
}

int main() {
    questao12();
    return 0;
}
