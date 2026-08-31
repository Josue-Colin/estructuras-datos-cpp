#ifndef PILA_H
#define PILA_H

struct Nodo
{
    int dato;
    Nodo *sig;
};

struct Pila
{
    Nodo *tope;
};

void inicializar(Pila *p);
bool vacia(Pila *p);
void push(Pila *p, int x);
int pop(Pila *p);
int peek(Pila *p);
void mostrar(Pila *p);
void liberar(Pila *p);

#endif