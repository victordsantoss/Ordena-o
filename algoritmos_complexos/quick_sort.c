#include <stdio.h>
#include <stdlib.h>

typedef int item;
#define key(a) (a)
#define less(a,b) (key(a) < key(b))
#define exch(a,b) {item t = a; a = b; b = t;}
#define cmpexch(a,b) {if (less(b,a)) exch(a,b);}
#define tam 100

void quick_sort (item *v, item l, item r);
item separa (item *v, item l, item r);

item main (){

    item *v = malloc (tam * sizeof (item));

    for (item i = 0; i < tam; i++)
        v[i] = rand () % 1000;

    printf ("Posição do pivo: %d\n", separa (v, 0, tam-1));

    quick_sort (v, 0, tam-1);

    for (item i = 0; i < tam; i++)
        printf ("%d ", v[i]);

    return 0;
}

void quick_sort (item *v, item l, item r){
    
    item j;

    if (r <= l) return;

    j = separa (v, l, r); 
    quick_sort (v, l, j-1);
    quick_sort (v, j+1, r);
}

item separa (item *v, item l, item r){
    /*
        Função que define a posição do pivô
        colocando os elementos menores a esquerda
        e os maiores a direita
    */
    item pivo = v[r];
    item j = l;

    for (item k = l; k < r; k++)
        if (less(v[k], pivo)){
            exch (v[k], v[j]);
            j++;
        }
        exch (v[j], v[r]);

    return j;
}