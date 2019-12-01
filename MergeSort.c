#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *vector, int left, int right);

int main (){
	
	int size, aux = 0;
	scanf ("%d", &size);

	int *num = malloc (size * sizeof(int));

	while (scanf("%d", &num[aux]) != EOF)
		aux++;

    mergeSort(num, 0, aux-1);

    for(int i = 0; i < aux; i++)
        printf("%d ", num[i]);

    printf ("\n");
	
	return 0;
}

void mergeSort(int *vector, int left, int right) {

    int i, j, k, halfSize, *vectorTemp; 
    
    if(left == right) return;
    halfSize = (left + right ) / 2;

    mergeSort(vector, left, halfSize);
    mergeSort(vector, halfSize + 1, right);

    i = left;
    j = halfSize + 1;
    k = 0;
    vectorTemp = (int *) malloc(sizeof(int) * (right - left + 1));

    while(i < halfSize + 1 || j  < right + 1){
        if (i == halfSize + 1 ) { 
            vectorTemp[k] = vector[j];
            j++;
            k++;
        }
        else{
            if (j == right + 1){
                vectorTemp[k] = vector[i];
                i++;
                k++;
            }
            else{
                if (vector[i] < vector[j]){
                    vectorTemp[k] = vector[i];
                    i++;
                    k++;
                }
                else{
                    vectorTemp[k] = vector[j];
                    j++;
                    k++;
                }
            }
        }

    }
    for(i = left; i <= right; i++)
        vector[i] = vectorTemp[i - left];

    free(vectorTemp);

}
