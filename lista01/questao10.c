#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao10.h"


void entrada10(char *senha){
    printf("Digite a senha: ");
    scanf("%s", senha);
}

void processamento10(char *senha, int *valida){
    char senha_sistema[] = "LINGUAGEMC";
    *valida = strcmp(senha, senha_sistema) == 0;
}

void saida10(int valida){
    if(valida){
        printf("Senha valida.\n");
    } else {
        printf("Senha invalida.\n");
    }
}

void questao10(void){
    char Senha[20];
    int Valida;

    entrada10(&Senha);
    processamento10(&Senha, &Valida);
    saida10(Valida);
}

int main(){
	
	questao10();
	
	return 0;
}
