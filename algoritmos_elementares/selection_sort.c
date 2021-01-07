#include <stdio.h>
#include <stdlib.h>

typedef int item;
#define key(a) (a)
#define less(a,b) (key(a) < key(b))
#define exch(a,b) {item t = a; a = b; b = t;}
#define cmpexch(a,b) {if (less(b,a)) exch(a,b);} 
#define tam 100

void selection_sort (item *v, item l, item r);

item main (void){

    item *v = malloc (tam * sizeof (item));

    for (item i = 0; i < tam; i++)
        v[i] = rand () % 1000; 

    selection_sort (v, 0, tam);

    for (item i = 0; i < tam; i++)
        printf ("%d ", v[i]);

    return 0;
}

void selection_sort (item *v, item l, item r){

    for (item i = l; i < r; i++){
        item min = i;
        for (item j = i+1; j < r; j++){
            if (v[j] < v[min])
                min = j;
        }
        exch (v[i], v[min]);
    }
}
