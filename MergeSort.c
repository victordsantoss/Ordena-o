#include <stdio.h>
#include <stdlib.h>
#define tam 100

void mergeSort(int *vector, int left, int right);

int main (){

    int *v = malloc (tam * sizeof (int));
    for (int i = 0; i < tam; i++)
        v[i] = rand () % 1000;

    mergeSort (v, 0, tam-1);

    for (int i = 0; i < tam; i++)
        printf ("%d ", v[i]);

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