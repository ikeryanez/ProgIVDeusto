//
// Created by Iker Yañez Calderon on 19/4/21.
//

#ifndef EXAMENC2018_CARRITO_H
#define EXAMENC2018_CARRITO_H

#include "producto.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    Producto producto;
    int cantidad;
}Compra;

typedef struct{
    Compra *compras;
    float importeTotal;
}Carrito;

void modificarCompra(Compra *c, int cant);
void imprimirCompra(Compra c);
void crearCarrito(Carrito *c,Producto *prods, int *cants, int tamanyo);
void imprimirTicket(Carrito c,int tamanyo);
void devolverCarrito(Carrito *c);
void modificarCarrito(Carrito *carrito,int ref, int cant,int tamanyo);

#endif //EXAMENC2018_CARRITO_H
