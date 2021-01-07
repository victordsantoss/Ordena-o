#include <stdio.h>
#include <stdlib.h>

typedef int item;
#define key(a) (a)
#define less(a,b) (key(a) < key(b))
#define exch(a,b) {item t = a; a = b; b = t;}
#define cmpexch(a,b) {if (less(b,a)) exch(a,b);}
#define tam 100
 
void bubble_sort (item *v, item l, item r);

item main (void){

    item *v = malloc (tam * sizeof (item));

    for (item i = 0; i < tam; i++) 
        v[i] = rand () % 1000;

    bubble_sort (v, 0, tam-1);

    for (item i = 0; i < tam; i++) 
        printf ("%d ", v[i]);

    return 0;
}

void bubble_sort (item *v, item l, item r){

    for (item i = l; i < r; i++){
        for (item j = l; j < r; j++) 
            cmpexch (v[j], v[j+1]);
    }
}