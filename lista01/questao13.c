#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "questao13.h"


void entrada13(int *num) {
    printf("Digite um numero: ");
    scanf("%d", num);
}

void processamento13(int *num, int *mod, bool *div) {
    *mod = *num % 5;

    if (*mod == 0) {
        *div = true;
    } else {
        *div = false;
    }
}

void saida13(int num, bool div) {
    
    
    if (div == true) {
        printf("o numero %d eh divisivel por 5", num);
    } else {
        printf("o numero %d nao eh divisivel por 5", num);
    }
}
void questao13(void) {
    int num, mod;
    bool div;

    entrada13(&num);
    processamento13(&num, &mod, &div);
    saida13(num, div);
}

int main() {
    questao13();
    return 0;
}
