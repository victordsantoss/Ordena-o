#include <stdio.h>
#include <stdlib.h>

void selectionSort (int *vector, int size);
void exchange (int *a, int *b);

int main (){

	int size, aux = 0;
	scanf ("%d", &size);

	int *num = malloc (size * sizeof(int));

	while (scanf("%d", &num[aux]) != EOF)
		aux++;

	selectionSort (num, aux);
	
	return 0;
}

void selectionSort (int *vector, int size){
	
	int smaller;

	for (int i = 0; i < size; i++){
		smaller = i;
		for (int j = i; j < size; j++){
			if (vector[j] < vector[smaller])
				smaller = j;
		}
		exchange (&vector[i], &vector[smaller]);	
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