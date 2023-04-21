#include <stdio.h>
#include "questao21.h"

int main(){
    questao21();
    return 0;
}

void entrada21(int *arr){
    int i;
    for(i = 0; i < 3; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void processamento21(int *arr){
	
    int i, j, x;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2 - i; j++){
            if(arr[j] > arr[j + 1]){
                x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }
}

void saida21(int *arr){
    printf("Numeros em ordem crescente: %d, %d, %d\n", arr[0], arr[1], arr[2]);
}

void questao21(void){
    int array[3];
    entrada21(&array);
    processamento21(&array);
    saida21(array);
}


