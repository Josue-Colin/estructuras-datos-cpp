#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *sig;
};

struct Pila
{
    Nodo *tope;
};

void inicializar(Pila *p)
{
    p->tope = nullptr;
}

void push(Pila *p, int x)
{
    Nodo *nuevo = new Nodo;

    nuevo->dato = x;
    nuevo->sig = p->tope;

    p->tope = nuevo;
}

void pop(Pila *p)
{
    Nodo *a = p->tope;
    int x = a->dato;
    p->tope = a->sig;
    delete (a);
}

int main()
{
    Pila p;

    inicializar(&p);

    push(&p, 10);
    push(&p, 20);
    push(&p, 30);

    return 0;
}