#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

struct Nodo
{
    int dato;
    Nodo *sig;
};

struct Lista
{
    Nodo *inicio;
};

void inicializar(Lista *l);
bool vacia(Lista *l);

void insertarInicio(Lista *l, int x);
void insertarFinal(Lista *l, int x);

void mostrar(Lista *l);

bool buscar(Lista *l, int x);
bool eliminar(Lista *l, int x);

void liberar(Lista *l);

#endif