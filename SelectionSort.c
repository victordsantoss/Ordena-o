#include <stdio.h>
#include <stdlib.h>

#define numEl 10

void selectionSort (int *vector, int tam);
void exchange (int *a, int *b);

int main () 
{
	int num [numEl];

	for (int i = 0; i < numEl; i++)
	{
		scanf ("%d", &num[i]);
	}
	selectionSort (num, numEl);
	
	return 0;
}

void selectionSort (int *vector, int tam)
{
	int smaller;

	for (int i = 0; i < tam; i++)
	{
		smaller = i;
		for (int j = i; j < tam; j++)
		{
			if (vector[j] < vector[smaller])
				smaller = j;
		}
		exchange (&vector[i], &vector[smaller]);	
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