#include <stdio.h>
#include <stdlib.h>

#define numEl 10

void insertionSort (int *vector, int tam);
void exchange (int *a, int *b);

int main () 
{
	int num [numEl];

	for (int i = 0; i < numEl; i++)
	{
		scanf ("%d", &num[i]);
	}
	insertionSort (num, numEl);
	
	return 0;
}

void insertionSort (int *vector, int tam)
{

	for (int i = 1; i < tam; i++)
	{
        int aux = i;
        while (aux >= 1 && vector[aux] < vector[aux-1])
        {
            exchange (&vector[aux], &vector[aux-1]);	
            aux--;
        }
    }

	for (int k  = 0; k < tam; k++)
	{
		printf  ("%d ", vector[k]);
	}
}

void exchange (int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}