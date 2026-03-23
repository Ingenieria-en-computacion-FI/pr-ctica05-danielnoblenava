#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <stdbool.h>

Lista* lista_crear()
{
    
    /*
    TODO:

    1 Crear un apuntador a lista
    2 Reswevar memoria para lista
    3 Devolver la lista
    */
	Lista* new = malloc(sizeof(Lista));
	return new;
}

bool lista_vacia(Lista* lista)
{
    	if(lista->head == NULL){
		return true;
	}
	return false;
}

void lista_insertar_head(Lista* lista, int dato)
{
	Nodo* newHead = nodo_crear(dato);
	newHead->siguiente = lista->head;
	if(lista->head == NULL){
		lista->tail = newHead;
	}
	lista->head = newHead;
	
}

void lista_insertar_tail(Lista* lista, int dato)
{
    /*
    TODO:

    1 Crear nuevo nodo
    2 Si lista está vacía:
        head y tail apuntan al nuevo nodo
    3 Si no:
        tail->siguiente apunta al nuevo nodo
        actualizar tail
    */
	Nodo* newTail = nodo_crear(dato);
	if(lista_vacia(lista)){
		lista->head = newTail;
		lista->tail = newTail;
	}else{
		lista->tail->siguiente = newTail;
		lista->tail = newTail;
		lista->tail->siguiente = NULL;
	}
	
}

int lista_eliminar_head(Lista* lista)
{
    /*
    TODO:

    1 Si lista vacía regresar error (-1)
    2 Guardar nodo a eliminar
    3 Mover head al siguiente nodo
    4 Si lista queda vacía:
       tail = NULL
    5 Liberar nodo
    6 Regresar dato eliminado
    */
	if(lista_vacia(lista))
		return -1;
	Nodo *eliminar = lista->head;
	lista->head = lista->head->siguiente;
	if(lista_vacia(lista))
		lista->tail = NULL;
	int dato = eliminar->dato;
	nodo_destruir(eliminar);
	return dato;
}

int lista_eliminar_tail(Lista* lista)
{
    /*
    TODO:

    1 Si lista vacía regresar error
    2 Si solo hay un nodo:
        guardar dato
        liberar nodo
        head = NULL
        tail = NULL
    3 Si hay varios nodos:
        recorrer lista hasta el nodo anterior al tail
    4 actualizar tail
    5 liberar nodo eliminado
    6 regresar dato
    */
	int dato;
	Nodo* eliminar = NULL;
	if(lista_vacia(lista)){
		return -1;
	}
	if(lista->head = lista->tail){
		dato = lista->tail->dato;
		nodo_destruir(lista->tail);
		lista->head = lista->tail = NULL; 
	}else{
		Nodo* curr = lista->head;
		eliminar = lista->tail;
		while(curr != eliminar){
			curr = curr->siguiente;
		}
		lista->tail = curr;
	}
	lista->tail->siguiente = NULL;
	dato = eliminar->dato;
	nodo_destruir(eliminar);
	return dato;
}

void lista_imprimir(Lista* lista)
{
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista)
{
    /*
    TODO:

    1 si la lista no esta vacia
    2 borrar el primero o el último 
    3 hacer que lista apunte a nulo
    */

	if(!lista_vacia(lista)){
		nodo_destruir(lista->tail);
	}
	lista = NULL;
		
}
