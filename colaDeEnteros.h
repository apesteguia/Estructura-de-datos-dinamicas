#ifndef MAG_COLA_DE_ENTEROS
#define MAG_COLA_DE_ENTEROS
#include <stdbool.h>
#include <stdlib.h>
//#include "tElem.h"

typedef struct nodoDeColaDeEnteros {
    int e;
    struct nodoDeColaDeEnteros * s;
} NodoDeColaDeEnteros

typedef struct colaDeEnteros {
    NodoDeColaDeEnteros * i; 
    NodoDeColaDeEnteros * f;
} ColaDeEnteros;
        
void nuevaColaDeTElems(ColaDeTElems *c);
void pideTurnoColaDeTElems(ColaDeTElems *c, int x);
void avanceColaDeTElems(ColaDeTElems *c);
void primeroColaDeTElems(ColaDeTElems c, int *x);
bool esNulaColaDeTElems(ColaDeTElems c); 

#endif // !MAG_COLA_DE_ENTEROS
