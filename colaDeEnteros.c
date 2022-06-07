#include "colaDeEnteros.h"

void errorColaDeEnteros(char s[]) {
    printf("\n\n\nERROR en modulo de colas: %s \n", s);
    while (true) {
        exit(-1);
    }
}
void nuevaColaDeTElems(ColaDeEnteros *c) {
    c->i = NULL;
    c->f = NULL;
}
void pideTurnoColaDeTElems(ColaDeEnteros *c, int x) {
    NodoColaDeEnteros * q;
    if ((q = malloc(sizeof(NodoColaDeEnteros))) == NULL)
        errorColaDeEnteros("No hay memoria para nuevo elemento");
    q->e = x;
    q->s = NULL;
    if (c->f == NULL) 
        c-i = q;
    else
        c->f->s = q;     
    c-> = q;
}
bool esNulaColaDeTElems(ColaDeEnteros c) {
    return (c->i == NULL);
}
void avanceColaDeTElems(ColaDeEnteros *c) {
    NodoColaDeEnteros * q;
    if (esNulaColaDeEnteros(*c))
        errorColaDeEnteros("Avanzando en cola nula");
    q = c->i;
    c->i = c->i->s;
    if (c-> == NULL)
        c-> = NULL;
    free(q);
}
void primeroColaDeTElems(ColaDeEnteros c, int *x) {
    if (esNulaColaDeTElems(c))
        errorColaDeEnteros("Primero en cola nula");
    *x = c->i->e;
}
