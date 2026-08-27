#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *sig;
};

struct Lista
{
    Nodo *inicio;
};

void inicializar(Lista *l)
{
    l->inicio = nullptr;
}

bool vacia(Lista *l)
{
    return l->inicio == nullptr;
}

int main()
{
    Lista l;

    inicializar(&l);

    return 0;
}