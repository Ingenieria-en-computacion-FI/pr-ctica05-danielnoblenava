#include "cola.h"
#include <stdbool.h>

Cola* cola_crear()
{
    return lista_crear();
}

bool cola_vacia(Cola* cola)
{
    /*
    TODO
    usar vaciar_lista
    */
	if(lista_vacia(cola))
		return true;
	return false;	
}

void cola_enqueue(Cola* cola, int dato)
{
    /*
    TODO
    usar lista_insertar_tail
    */
	lista_insertar_tail(cola, dato);
}

int cola_dequeue(Cola* cola)
{
    /*
    TODO
    usar lista_eliminar_head
    */
	int dato_eliminado = lista_eliminar_head(cola);
	return dato_eliminado;
}

int cola_frente(Cola* cola)
{
    /*
    TODO
    regresar dato del head
    */
	int frente = cola->head->dato;
	return frente;
}

void cola_destruir(Cola* cola)
{
    /*
    TODO
    usar lista_destruir
    */
	lista_destruir(cola);
}
