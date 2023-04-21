#include<stdio.h>
#include<stdlib.h>


void questao22(void){
    char municipio[50];
    int qtd_eleitores, qtd_votos;

    entrada22(&municipio, &qtd_eleitores, &qtd_votos);
    processamento22(&qtd_eleitores, &qtd_votos);
}

void entrada22(char *municipio_nome, int *eleitores, int *votos){

    printf("Digite o nome do municipio: ");
    gets(municipio_nome);
    printf("Informe a quantidade de eleitores: ");
    scanf("%d", eleitores);
    printf("Informe a quantidade de votos do canditado mais votado : ");
    scanf("%d", votos);
}

void processamento22( int *eleitores, int *votos){
    if(*eleitores > 200000){
        if(*votos < *eleitores/2){
            printf("Vai ter o segundo turno");
        }
        else{
            printf("Não haverá segundo turno");
        }
    }
    else {
        printf("O municipio nao tem eleitores suficientes para ter segundo turno.\n");
    }

}

int main(){
	questao22();
	
	return 0;
}
