#include "ListaSimple.h"
#include <iostream>

using namespace std;

void inicializar(Lista *l)
{
    l->inicio = nullptr;
}

bool vacia(Lista *l)
{
    return l->inicio == nullptr;
}

void insertarInicio(Lista *l, int x)
{
    Nodo *nuevo = new Nodo;

    nuevo->dato = x;
    nuevo->sig = l->inicio;

    l->inicio = nuevo;
}

void insertarFinal(Lista *l, int x)
{
    Nodo *nuevo = new Nodo;

    nuevo->dato = x;
    nuevo->sig = nullptr;

    if (vacia(l))
    {
        l->inicio = nuevo;
        return;
    }

    Nodo *a = l->inicio;

    while (a->sig != nullptr)
    {
        a = a->sig;
    }

    a->sig = nuevo;
}

void mostrar(Lista *l)
{
    cout << "La lista contiene: ";

    for (Nodo *a = l->inicio; a != nullptr; a = a->sig)
    {
        cout << a->dato << " -> ";
    }

    cout << "NULL" << endl;
}

bool buscar(Lista *l, int x)
{
    for (Nodo *a = l->inicio; a != nullptr; a = a->sig)
    {
        if (a->dato == x)
        {
            return true;
        }
    }

    return false;
}

bool eliminar(Lista *l, int x)
{
    if (vacia(l))
    {
        return false;
    }

    if (l->inicio->dato == x)
    {
        Nodo *a = l->inicio;
        l->inicio = l->inicio->sig;
        delete a;

        return true;
    }

    Nodo *anterior = l->inicio;
    Nodo *actual = l->inicio->sig;

    while (actual != nullptr)
    {
        if (actual->dato == x)
        {
            anterior->sig = actual->sig;
            delete actual;

            return true;
        }

        anterior = actual;
        actual = actual->sig;
    }

    return false;
}

void liberar(Lista *l)
{
    Nodo *a;

    while (l->inicio != nullptr)
    {
        a = l->inicio;
        l->inicio = l->inicio->sig;
        delete a;
    }
}