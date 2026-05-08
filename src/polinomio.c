#include "polinomio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Lista doblemente ligada
Nodo* crearNodo(float coef, int exp){
     Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));
     nuevo->termino.coeficiente = coef;
     nuevo->termino.exponente = exp;
     nuevo->siguiente = NULL;
     nuevo->anterior = NULL;
     return nuevo;
}

void insertarNodoOrdenado(Polinomio* p, Nodo* nuevo){
     if (p->cabeza ==NULL){
         p->cabeza->cola = nuevo;
         return;
     }
}