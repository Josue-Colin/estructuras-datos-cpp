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

int main()
{
    Cola c;

    inicializar(&c);

    return 0;
}