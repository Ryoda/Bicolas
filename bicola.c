#include<stdio.h>
#include<stdlib.h>
#include "bicola.h"

void vacia(BiCola *c)
{
	Nodo * nuevo = (Nodo *) malloc(sizeof(Nodo));
	nuevo->informacion = 0;
	nuevo->siguiente = NULL;
	nuevo->anterior = NULL;
    c->primero = nuevo;
    c->ultimo = NULL;
}

int esVacia(BiCola c)
{
   return(c.primero->siguiente == NULL);
}

void encolar(BiCola *c, int elem, char direccion)
{
    Nodo * nuevo;
    if((nuevo = (Nodo *) malloc(sizeof(Nodo))) == NULL)
    {
        fprintf(stderr, "malloc termino inesperadamente\n");
    }
    else
    {
		nuevo->informacion = elem;
		nuevo->siguiente = NULL;
		nuevo->anterior = NULL;
		if()
		{
			
		}
        if(direccion == LEFT)
        {
			nuevo->siguiente = c->primero->siguiente;
			nuevo->anterior = c->primero;
			c->primero->siguiente->anterior = nuevo;
			c->primero->siguiente = nuevo;
			c->primero->informacion = c->primero->informacion + 1;
		}else
		{
			
		}
    }

}

void desencolar(Cola *c)
{
    if(c->primero == NULL && c->ultimo == NULL)
    {
        fprintf(stderr, "error en el procedimiento desencolar(): Se intento desencolar en una cola vacia\n");
    }else
    {
        Nodo *auxiliar;
        auxiliar = c->primero;
        c->primero = auxiliar->siguiente;
        free(auxiliar);
    }
}

int frente(Cola c)
{
    return(c.primero->informacion);
}

void destruir(Cola *c)
{
    Nodo *auxiliar;


    while(c->primero != NULL)
    {
        auxiliar = c->primero;
        c->primero = auxiliar->siguiente;
        free(auxiliar);
    }
}

void mostrarCola(Cola cola)
{
    Nodo *indice;
    indice = cola.primero;
    while(indice != NULL)
    {
        printf("%d ", indice->informacion);
        indice = indice->siguiente;
    }
     printf("\n");
}
