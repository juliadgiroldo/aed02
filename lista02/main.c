#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 9
#define MAX 10


// METODO BUBBLE SORT

/*int metodoBbs(){
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
}*/
// METODO MERGESORT

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

/* Driver code */
int metodoMerge()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Vetor original \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nVetor ordenado  \n");
    printArray(arr, arr_size);
    return 0;
}
 
// Função main
void metodoQs()
{
 int i, vet[MAX];
 
 // Lê MAX ou 10 valores
 for(i = 0; i < MAX; i++)
 {
  printf("Digite um valor: ");
  scanf("%d", &vet[i]);
 }
 
 // Ordena os valores
 quick_sort(vet, 0, MAX - 1);
 
 // Imprime os valores ordenados

 printf("\nValores ordenados\n");
 for(i = 0; i < MAX; i++)
 {
  printf("%d\t", vet[i]);
 }
 system("pause");
}
 
// Função de Ordenação por Seleção
void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}
int main()
{
    /*printf("METODO BUBBLE SORT\n");
    metodoBbs();
    printf("\nMETODO DE INSERCAO\n");
    metodoIs();
    printf("\nMETODO DE SELECAO\n");
    metodoSs();*/
    printf("\nMETODO DE MERGE\n");
    metodoMerge();
    printf("\nMETODO DE QUICK\n");
    metodoQs();
    return 0;
}
