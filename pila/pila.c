#include "pila.h"
#include <stdbool.h>

Pila* pila_crear()
{
    /*
    TODO
    usar crear lista
    */
	Lista* newLista = lista_crear();
	return newLista;
}

bool pila_vacia(Pila* pila)
{
    /*
    TODO
    usar lista_vacia
    */
	if(lista_vacia(pila))
		return true;
	return false;
}

void pila_push(Pila* pila, int dato)
{
    /*
    TODO
    usar lista_insertar_tail
    */
	lista_insertar_tail(pila, dato);
}

int pila_pop(Pila* pila)
{
    /*
    TODO
    usar lista_eliminar_tail
    */
	int dato_eliminado = lista_eliminar_tail(pila);
	return dato_eliminado;
}

int pila_top(Pila* pila)
{
    /*
    TODO
    regresar dato del tail
    */
	int top = pila->tail->dato;
	return top;
}

void pila_destruir(Pila* pila)
{
    // TODO
    // Usar lista destruir
	lista_destruir(pila);
}
