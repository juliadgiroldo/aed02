#include <stdio.h>
#include "questao24.h"

int main(){
    questao24();
    return 0;
}

void entrada24(float *valorC, float *valorP){
    printf("Digite o valor da compra: ");
    scanf("%f", valorC);
    
    printf("Digite o valor do pagamento: ");
    scanf("%f", valorP);
}

void processamento24(float *valorC, float *valorP, int *nota100, int *nota10, int *nota1, float *troco){
    *troco = *valorP - *valorC;
    
    if(*troco < 0){
        printf("Pagamento negado\n");
    } else {
        *nota100 = *troco / 100;
        int resto = (int)*troco % 100;
        *nota10 = resto / 10;
        resto = resto % 10;
        *nota1 = resto;
    }
}

void saida24(int nota100, int nota10, int nota1){
    printf("Numero de notas de 100: %d\n", nota100);
    printf("Numero de notas de 10: %d\n", nota10);
    printf("Numero de notas de 1: %d\n", nota1);
}

void questao24(void){
    float valorCompra, valorPgmto, troco;
    int nota100 = 0, nota10 = 0, nota1 = 0;
    
    entrada24(&valorCompra, &valorPgmto);
    processamento24(&valorCompra, &valorPgmto, &nota100, &nota10, &nota1, &troco);
    saida24(nota100, nota10, nota1);
}



