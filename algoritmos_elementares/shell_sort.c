#include <stdio.h>
#include <stdlib.h>

typedef int item;
#define key(a) (a)
#define less(a,b) (key(a) < key(b))
#define exch(a,b) {item t = a; a = b; b = t;}
#define cmpexch(a,b) {if (less(b,a)) exch(a,b);} 
#define tam 100

void shell_sort (item *v, item size);

item main (void){

    item *v = malloc (tam * sizeof (item));
    item i;
    
    for (i = 0; i < tam; i++)
        v[i] = rand () % 1000; 

    shell_sort (v, i);

    for (item i = 0; i < tam; i++)
        printf ("%d ", v[i]);

    return 0;
}

void shell_sort (item *vet, item size){

    item i, j, val;
    item salto = 1;

    while (salto < size)
        salto = 3*salto+1;

    while (salto > 1){
        salto /= 3;

        for (i = salto; i < size; i++){
            val = vet[i];
            j = i-salto;
            while (j >= 0 && val < vet[j]){
                vet[j+salto] = vet[j];
                j -= salto;
            }
            vet[j+salto] = val;
        }
    }
}