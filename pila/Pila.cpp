#include "Pila.h"
#include <iostream>

using namespace std;

void inicializar(Pila *p)
{
    p->tope = nullptr;
}

bool vacia(Pila *p)
{
    return p->tope == nullptr;
}

void push(Pila *p, int x)
{
    Nodo *nuevo = new Nodo;

    nuevo->dato = x;
    nuevo->sig = p->tope;

    p->tope = nuevo;
}

int pop(Pila *p)
{
    if (vacia(p))
    {
        cout << "La pila esta vacia" << endl;
        return -1;
    }

    Nodo *a = p->tope;
    int x = a->dato;

    p->tope = a->sig;

    delete a;

    return x;
}

int peek(Pila *p)
{
    if (vacia(p))
    {
        cout << "La pila esta vacia" << endl;
        return -1;
    }

    return p->tope->dato;
}

void mostrar(Pila *p)
{
    cout << "La pila contiene: ";

    for (Nodo *a = p->tope; a; a = a->sig)
    {
        cout << a->dato << " -> ";
    }

    cout << "NULL" << endl;
}

void liberar(Pila *p)
{
    while (!vacia(p))
    {
        pop(p);
    }
}