#include "cola.h"
#include <iostream>

void inicializar(Cola *c)
{
    c->frente = nullptr;
    c->final = nullptr;
}

bool vacia(Cola *c)
{
    return c->frente == nullptr;
}

void enqueue(Cola *c, int x)
{
    Nodo *nuevo = new Nodo;

    nuevo->dato = x;
    nuevo->sig = nullptr;

    if (vacia(c))
    {
        c->frente = nuevo;
        c->final = nuevo;
    }
    else
    {
        c->final->sig = nuevo;
        c->final = nuevo;
    }
}

int dequeue(Cola *c)
{
    if (vacia(c))
    {
        std::cout << "La cola esta vacia" << std::endl;
        return -1;
    }

    Nodo *a = c->frente;
    int x = a->dato;

    c->frente = a->sig;

    if (c->frente == nullptr)
    {
        c->final = nullptr;
    }

    delete a;

    return x;
}

int peek(Cola *c)
{
    if (vacia(c))
    {
        std::cout << "La cola esta vacia" << std::endl;
        return -1;
    }

    return c->frente->dato;
}

void mostrar(Cola *c)
{
    std::cout << "La cola contiene: ";

    for (Nodo *a = c->frente; a; a = a->sig)
    {
        std::cout << a->dato << " -> ";
    }

    std::cout << "NULL" << std::endl;
}

void liberar(Cola *c)
{
    while (!vacia(c))
    {
        dequeue(c);
    }
}