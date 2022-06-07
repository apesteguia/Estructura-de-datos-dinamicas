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
        
void nuevaColaDeEnteros(ColaDeTElems *c);
void pideTurnoColaDeEnteros(ColaDeTElems *c, int x);
void avanceColaDeEnteros(ColaDeTElems *c);
void primeroColaDeEnteros(ColaDeTElems c, int *x);
bool esNulaColaDeEnteros(ColaDeTElems c); 

#endif // !MAG_COLA_DE_ENTEROS
