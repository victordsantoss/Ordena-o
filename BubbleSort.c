#include <stdio.h>
#include <stdlib.h>

#define numEl 10

void bubbleSort (int *vector, int tam);
void exchange (int *a, int *b);

int main () 
{
	int num [numEl];

	for (int i = 0; i < numEl; i++)
	{
		scanf ("%d", &num[i]);
	}
	bubbleSort (num, numEl);
	
	return 0;
}

void bubbleSort (int *vector, int tam)
{
    int inversion;
    do {
        inversion = 0;
        for (int i = 0; i < tam; i++)
        {
            if (vector[i] < vector[i-1])
            {
                exchange (&vector[i], &vector[i-1]);
                inversion = -1;
            }
        }
    } while (inversion);
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