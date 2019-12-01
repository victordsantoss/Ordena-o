#include <stdio.h>
#include <stdlib.h>

void bubbleSort (int *v, int size);

int main (){

    int size, aux = 0;
	scanf ("%d", &size);

	int *num = malloc (size * sizeof(int));

	while (scanf("%d", &num[aux]) != EOF)
		aux++;

	bubbleSort (num, aux);
    
    return 0;
}

void bubbleSort (int *v, int size){

    int control, aux;
    for (int i = 0; i < size; i++){
        control = 1;
        for (int j = 0; j < size-1; j++){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
        if(control == 0)
            break;
    }
    for (int k  = 0; k < size; k++)
		printf ("%d ", v[k]);
        
    printf ("\n ");
}