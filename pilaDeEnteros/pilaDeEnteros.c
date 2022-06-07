#define "pilaDeEnteros.h"

void errorPilaDeEnteros(char s[]) {
    printf("\n\n\nERROR en modulo de pilas: %s \n", s);
    while(true) {
        exit(-1);
    }
}
void nuevaPilaDeEnteros(PilaDeEnteros *p) {
    p = NULL;
}
void apilarPilaDeEnteros(PilaDeEnteros *p, int x) {
    NodoPilaDeEnteros *q;
    if ((q = malloc(sizeof(NodoPilaDeEnteros))) == NULL)
        errorPilaDeEnteros("No hay suficiente memoria para un nuevo elemento");
    q->e = x;
    q->s = p;
    p = q;
}
void desapilarPilaDeEnteros(PilaDeEnteros *p) {
    NodoPilaDeEnteros *q;
    if (esNulaPilaDeEnteros(*p))
        errorPilaDeEnteros("Desapilando pila nula");
    q = p;
    p = p->s;
    free(q);
}
void cimaPilaDeEnteros(PilaDeEnteros p, int *x) {
    if (esNulaPilaDeEnteros(p))
        errorPilaDeEnteros("No hay valor en cola nula");
    *x = p->e;
}
bool esNulaPilaDeEnteros(PilaDeEnteros p) {
    return (p == NULL);
}
