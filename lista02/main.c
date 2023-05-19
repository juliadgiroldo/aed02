#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 9


// METODO BUBBLE SORT

int metodoBbs(){
	setlocale(LC_ALL, "");

	int num[10];
	int i, aux, cont;

// recebes os valores do array

	for(i = 0; i< 10; i++){
		printf("Digite um valor: ");
		scanf("%d", &num[i]);
	}

//imprime a ordem da array

	printf("Ordem da array atual:\n");
	for (i = 0; i < 10; i++){
		printf("%4d", num[i]);
	}

// ordenação da array com o método bubble sort

	for(cont = 0; cont < 10 - 1; cont++){ // loop que repete para ordenar todos os valores
		for(i = 0; i< 10 - 1; i++){  // loop que ordena os valores
			if(num[i] > num[i+1]){
				aux = num[i];
				num[i] = num[i+1];
				num[i+1] = aux;
			}
		}
	}

	printf("\nelementos do array em ordem crescente:\n");

	for(i = 0; i < 10; i++){
		printf("%4d", num[i]);
	}
	return 0;
}


// METODO DE INSERÇÃO
void metodoIs(){
        int k;
        int lista[N] = {4,5,8,2,9,1,3,7,6};

        printf("\nLista original: ");
        for(k=0; k < N; k++){
            printf("%4d", lista[k]);
        }

        insertionSort(lista, N);

        printf("\nLista ordenada: ");
        for(k=0; k < N; k++){
            printf("%4d", lista[k]);
        }
}

void insertionSort(int *lista, int tamanho){
    int i,j, aux;

    for(i=0; i< tamanho-1; i++){
        if(lista[i] > lista[i+1]){
        aux = lista[i+1];
        lista[i+1] = lista[i];
        lista[i] = aux;

        j = i - 1;
            while(j>=0){
                if(aux < lista[j]){
                    lista[j+1] = lista[j];
                    lista[j] = aux;
                } else {
                    break;
                }
                j = j - 1;
            }
        }
    }
}

// METODO DE SELEÇÃO

void selecao(int *vet, int num){
	int aux, menor, i, j;
	for(i = 0; i < num - 1; i++){
		menor = i;
		for(j = i + 1; j < num; j++){
			if(vet[menor]> vet[j]){
				menor = j;
			}
		}
		if(i != menor){
			aux = vet[i];
			vet[i] = vet[menor];
			vet[menor] = aux;
		}
	}
}

void metodoSs(){

	int vetor[9] = {3,6,5,1,2,8,7,9,4};
	int n = 9;
	int i;

	printf("\nVetor original: ");
		for(i = 0; i< n;i++){
		printf("%4d", vetor[i]);
	}

	selecao(vetor, n);

	printf("\nVetor ordenado: ");
	for(i = 0; i< n;i++){
		printf("%4d", vetor[i]);
	}
}

int main()
{
    printf("METODO BUBBLE SORT\n");
    metodoBbs();
    printf("\nMETODO DE INSERCAO\n");
    metodoIs();
    printf("\nMETODO DE SELECAO\n");
    metodoSs();
    return 0;
}
