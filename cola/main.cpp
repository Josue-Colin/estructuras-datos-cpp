#include "cola.h"
#include <iostream>

int main()
{
    Cola c;

    inicializar(&c);

    enqueue(&c, 10);
    enqueue(&c, 20);
    enqueue(&c, 30);

    mostrar(&c);
    std::cout << "El frente actual es: " << peek(&c) << std::endl;
    std::cout << "Se elimino: " << dequeue(&c) << std::endl;
    mostrar(&c);
    std::cout << "El nuevo frente es: " << peek(&c) << std::endl;

    liberar(&c);

    return 0;
}