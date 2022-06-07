#ifdef MAG_PILA_DE_ENTEROS
#define MAG_PILA_DE_ENTEROS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct nodoPilaDeEnteros {
    int e;
    NodoPilaDeEnteros *s;
} NodoPilaDeEnteros;

typedef struct pilaDeEnteros {
    NodoPilaDeEnteros *c;
} PilaDeEnteros;

void nuevaPilaDeEnteros(PilaDeEnteros *p);
void apilarPilaDeEnteros(PilaDeEnteros *p, int x);
void desapilarPilaDeEnteros(PilaDeEnteros *p);
void cimaPilaDeEnteros(PilaDeEnteros p, int *x);
bool esNulaPilaDeEnteros(PilaDeEnteros p);

#endif //MAG_PILA_DE_ENTEROS
