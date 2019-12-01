#include <stdio.h>
#include <stdlib.h>

void insertionSort (int *vector, int size);
void exchange (int *a, int *b);

int main (){
	
	int size, aux = 0;
	scanf ("%d", &size);

	int *num = malloc (size * sizeof(int));

	while (scanf("%d", &num[aux]) != EOF)
		aux++;

	insertionSort (num, aux);
	
	return 0;
}

void insertionSort (int *vector, int size){

	for (int i = 1; i < size; i++){
        int aux = i;
        while (aux >= 1 && vector[aux] < vector[aux-1]){
            exchange (&vector[aux], &vector[aux-1]);	
            aux--;
        }
    }

	for (int k  = 0; k < size; k++)
		printf ("%d ", vector[k]);
	
    printf ("\n");
}

void exchange (int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}