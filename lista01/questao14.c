#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"questao14.h"

void entrada14(int *num) {
    printf("Digite um numero: ");
    scanf("%d", num);
}

void processamento14(int *num, int *mod, bool *paridade) {
    *mod = *num % 2;

    if (*mod == 0) {
        *paridade = true;
    } else {
        *paridade = false;
    }
}

void saida14(int num, bool paridade) {
    
    
    if (paridade == true) {
        printf("o numero %d eh par", num);
    } else {
        printf("o numero %d eh impar", num);
    }
}
void questao14(void) {
    int num, mod;
    bool paridade;

    entrada14(&num);
    processamento14(&num, &mod, &paridade);
    saida14(num, paridade);
}

int main() {
    
    questao14();
    return 0;
}
