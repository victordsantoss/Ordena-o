#include <stdio.h>
#include <stdlib.h>
#define Max 10

void CountingSort(int *v, int size);

int main (){

    int size;
    int vector[Max];

    scanf ("%d", &size);

    for (int i = 0; i < size; i++){
        scanf("%d", &vector[i]);
    }

    CountingSort(vector, size);

    return 0;
}

void CountingSort(int *v, int size){
    
    int vectorAux[Max];
    int i, j, k;

    for (i = 0; i < Max; i++)
        vectorAux[i] = 0;
    
    for (i = 0; i < size; i++)
        vectorAux[v[i]]++;
    
    for (i = 0, j = 0; j < Max; j++){
        for(k = vectorAux[j]; k > 0; k--){
            v[i++] = j;
        }
    }

    for (i = 0; i < size; i++){
        if (i == size-1)
            printf("%d", v[i]);
        else 
            printf("%d ", v[i]);
    }
    printf ("\n");
}
