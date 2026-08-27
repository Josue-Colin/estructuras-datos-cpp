#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *sig;
} Nodo;

typedef struct
{
    Nodo *tope;
} Pila;

void inicializar(Pila *p)
{
    p->tope = NULL;
}

int main(void)
{

    Pila p;

    inicializar(&p);

    printf("Pila inicializada correctamente\n");

    return 0;
}