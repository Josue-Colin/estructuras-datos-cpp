#ifndef COLA_H
#define COLA_H

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

void inicializar(Cola *c);
bool vacia(Cola *c);
void enqueue(Cola *c, int x);
int dequeue(Cola *c);
int peek(Cola *c);
void mostrar(Cola *c);
void liberar(Cola *c);

#endif