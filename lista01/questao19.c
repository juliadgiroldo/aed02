#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"


void entrada19(int *l1, int *l2, int *l3){
    printf("Informe um lado do triangulo:");
    scanf("%d", l1);
    printf("Informe outro lado do triangulo:");
    scanf("%d", l2);
    printf("Informe outro lado do triangulo:");
    scanf("%d", l3);
}

void processamento19 (int *l1, int *l2, int *l3,int *tri, int *saida){
    if(*l1 + *l2 > *l3 && *l1 + *l3 > *l2 && *l2 + *l3 > *l1){
        *tri = 1; //forma triangulo
        if(*l1 == *l2 && *l1 == *l3) {
            *saida = 2 ;//equilateto
        } else {
            if(*l1 == *l2 || *l1 == *l3 || *l2 == *l3) {
                *saida = 3; //Isosceles
            } else {
                *saida = 4;//Escaleno
            }
        }
    }
    else{
        *tri = 5; //Os 3 lados NAO formam um trinagulo
    }

}

void saida19(int saida, int tri){
	
	if(tri == 1){
		printf("Forma um triangulo");
		if(saida == 2){
			printf("Triangulo equilatero");
		}
		else if(saida == 3){
			printf("Triangulo isosceles");
		}
		else{
			printf("Triangulo escaleno");
		}
	} else {
		printf("Nao forma triangulo");
	}
}

void questao19(void) {
    int lado1, lado2, lado3, res, triangulo;

    entrada19(&lado1, &lado2, &lado3);
    processamento19(&lado1, &lado2, &lado3,&res, &triangulo);
    saida19(res);
}

int main(){
	
	questao19();
	
	return 0;
}



