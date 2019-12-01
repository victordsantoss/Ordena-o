#include <stdio.h>
#include <stdlib.h>

void bubbleSort (int *vector, int size);

int main (){

    int size, aux = 0;
	scanf ("%d", &size);

	int *num = malloc (size * sizeof(int));

	while (scanf("%d", &num[aux]) != EOF)
		aux++;

	bubbleSort (num, aux);
    
    return 0;
}

void bubbleSort (int *vector, int size){

    int control, aux;
    for (int i = 0; i < size; i++){
        control = 1;
        for (int j = 0; j < size-1; j++){
            if (vector[j] > vector[j+1]){
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
        if(control == 0)
            break;
    }
    for (int k  = 0; k < size; k++)
		printf ("%d ", vector[k]);
        
    printf ("\n ");
    
}