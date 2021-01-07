#include <stdio.h>
#include <stdlib.h>

typedef int item;
#define key(a) (a)
#define less(a,b) (key(a) < key(b))
#define exch(a,b) {item t = a; a = b; b = t;}
#define cmpexch(a,b) {if (less(b,a)) exch(a,b);}
#define tam 100

void merge_sort (item *v, item l, item r);
void merge (item *v, item l, item r1, item r2);
item separa (item *v, item l, item r);

item main (){

    item *v = malloc (tam * sizeof (int));

    for (item i = 0; i < tam; i++)
        v[i] = rand () % 1000;

    merge_sort (v, 0, tam-1);

    for (item i = 0; i < tam; i++)
        printf ("%d ", v[i]);

    return 0;
}

void merge_sort (item *v, item l, item r){

    if (l >= r) return;

    item meio = (r + l) / 2;
    merge_sort (v, l, meio);
    merge_sort (v, meio + 1, r);
    merge (v, l, meio, r);
}

void merge (item *v, item l, item r1, item r2){

    item *v2 = malloc (sizeof (item) * (r2-l+1));
    item k = 0;
    item i = l;
    item j = r1 + 1;

    while (i <= r1 && j <= r2){
        if (less (v[i], v[j]))
            v2[k++] = v[i++];
        else
            v2[k++] = v[j++];
    }

    while (i <= r1)
        v2[k++] = v[i++];

    while (j <= r2)
        v2[k++] = v[j++];

    k = 0;

    for (i = l; i <= r2; i++)
        v[i] = v2[k++];

    free (v2);
}