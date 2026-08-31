#include "ListaSimple.h"
#include <iostream>

using namespace std;

int main()
{
    Lista l;

    inicializar(&l);

    insertarInicio(&l, 20);
    insertarInicio(&l, 10);

    insertarFinal(&l, 30);
    insertarFinal(&l, 40);

    mostrar(&l);

    if (buscar(&l, 30))
    {
        cout << "El valor 30 si esta en la lista" << endl;
    }
    else
    {
        cout << "El valor 30 no esta en la lista" << endl;
    }

    if (buscar(&l, 100))
    {
        cout << "El valor 100 si esta en la lista" << endl;
    }
    else
    {
        cout << "El valor 100 no esta en la lista" << endl;
    }

    if (eliminar(&l, 30))
    {
        cout << "Se elimino el 30" << endl;
    }
    else
    {
        cout << "No se encontro el 30" << endl;
    }

    mostrar(&l);

    liberar(&l);

    return 0;
}