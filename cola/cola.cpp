#include <iostream>

struct Nodo
{
    int dato;
    Nodo *sig;
};

struct Cola
{
    Nodo *frente;
    Nodo *final;
};

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

int main()
{
    Cola c;

    inicializar(&c);

    enqueue(&c, 10);
    enqueue(&c, 20);
    enqueue(&c, 30);

    std::cout << "Se elimino: " << dequeue(&c) << std::endl;
    return 0;
}