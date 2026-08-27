# Cola en C++

Implementación de una estructura de datos tipo cola utilizando nodos y memoria dinámica.

## Descripción

Una cola sigue el principio FIFO:

**First In, First Out**

Esto significa que el primer elemento en entrar es el primero en salir.

Ejemplo:

10 -> 20 -> 30

El primer elemento que saldrá será 10.

## Operaciones implementadas

- Inicializar cola
- Verificar si está vacía
- Enqueue
- Dequeue
- Peek
- Mostrar elementos
- Liberar memoria

## Complejidad

| Operación   | Complejidad |
| ----------- | ----------- |
| Inicializar | O(1)        |
| Vacía       | O(1)        |
| Enqueue     | O(1)        |
| Dequeue     | O(1)        |
| Peek        | O(1)        |
| Mostrar     | O(n)        |
| Liberar     | O(n)        |

## Conceptos utilizados

- Punteros
- Estructuras
- Memoria dinámica
- `new` y `delete`
- Listas enlazadas
- FIFO
- Recorrido de nodos

## Estructura de la cola

La cola utiliza dos punteros:

- `frente`: apunta al primer elemento de la cola.
- `final`: apunta al último elemento de la cola.

Ejemplo:

frente final
| |
v v
[10] -> [20] -> [30] -> nullptr
