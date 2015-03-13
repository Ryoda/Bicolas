#ifndef BICOLA_H_INCLUDED
#define BICOLA_H_INCLUDED
#define LEFT L
#define RIGHT R
typedef struct DobleNodo
{
    int informacion;
    struct DobleNodo * siguiente, * anterior;
}Nodo;

typedef struct
{
	Nodo *primero, *ultimo;
}BiCola;

void vacia(BiCola *c);
int esVacia(BiCola c);
void encolar(BiCola *c, int elem);
void desencolar(Cola *c);
int frente(Cola c);
void destruir(Cola *c);
void mostrarCola(Cola cola);

#endif // COLAS_H_INCLUDED
