#include <stdio.h>
#include <stdlib.h>

void shellSort (int *vector, int size);

int main (){

    int size, aux = 0;
	scanf ("%d", &size);

	int *num = malloc (size * sizeof(int));

	while (scanf("%d", &num[aux]) != EOF)
		aux++;

	shellSort (num, aux);

    for(int i = 0; i < aux; i++)
        printf("%d ", num[i]);

    printf ("\n");
    
    return 0;
}

void shellSort(int *vet, int size){

    int i , j , value;
    int gap = 1;

    while(gap < size)
        gap = 3*gap+1;

    while (gap > 1){
        gap /= 3;

        for(i = gap; i < size; i++){
            value = vet[i];
            j = i-gap;
            while (j >= 0 && value < vet[j]){
                vet [j+gap] = vet[j];
                j -= gap;
            }
            vet [j+gap] = value;
        }
    }
}
