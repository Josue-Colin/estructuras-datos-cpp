#include "Pila.h"
#include <iostream>

using namespace std;

int main()
{
    Pila p;

    inicializar(&p);

    push(&p, 10);
    push(&p, 20);
    push(&p, 30);

    mostrar(&p);

    cout << "Tope: " << peek(&p) << endl;

    cout << "Eliminado: " << pop(&p) << endl;

    mostrar(&p);

    liberar(&p);

    return 0;
}