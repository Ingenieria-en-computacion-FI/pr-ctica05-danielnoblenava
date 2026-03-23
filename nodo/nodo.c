#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato)
{
    // Todo: implementar la función
	Nodo* new = malloc(sizeof(Nodo));
	new->dato = dato;
	new->siguiente = NULL;
	return new;
}
void nodo_destruir(Nodo* nodo)
{
    // Todo: implementar la fucion
	if(nodo->siguiente == NULL)
		 free(nodo);
}
