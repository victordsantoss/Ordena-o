#include <stdio.h>
#include <stdlib.h>

void quickSort (int *vector, int left, int right);

int main (){

	int size, aux = 0;
	scanf ("%d", &size);

	int *num = malloc (size * sizeof(int));

	while (scanf("%d", &num[aux]) != EOF)
		aux++;

	quiquickSortck (num, 0, aux);

    for(int i = 0; i < aux; i++)
        printf("%d ", num[i]);

    printf ("\n");
	
	return 0;
}

void quickSort(int *vector, int left, int right){
    
    int pivot = left,ch,j;   

    for(int i = left+1; i <= right; i++){        
        j = i;                      
        if(vector[j] < vector[pivot]){     
            ch = vector[j];               
            while(j > pivot){           
                vector[j] = vector[j-1];      
                j--;                    
            }
            vector[j] = ch;               
            pivot++;                    
        }
    }

    if(pivot-1 >= left)           
        quickSort(vector, left, pivot-1);  

    if(pivot+1 <= right)           
        quickSort(vector, pivot+1, right); 

 }
