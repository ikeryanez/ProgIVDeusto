//
// Created by Iker Yañez Calderon on 19/4/21.
//

#include "carrito.h"

void modificarCompra(Compra *c, int cant){
    c->cantidad=cant;
}

void imprimirCompra(Compra c){
    printf("Ref.%d %-20s %.2f x %d kg/ud\n",c.producto.referencia,c.producto.nombre,c.producto.precio,c.cantidad);
}

void crearCarrito(Carrito *c,Producto *prods, int *cants, int tamanyo){
    int i;
    c->compras = (Compra *) malloc(tamanyo* sizeof(Compra));
    c->importeTotal=0;
    for (i = 0; i < tamanyo; i++) {
        c->compras[i].producto=prods[i];
        c->compras[i].cantidad=cants[i];
        c->importeTotal += prods[i].precio*cants[i];
    }
}

void imprimirTicket(Carrito c,int tamanyo){
    int i;
    printf("TICKET\n");
    printf("------\n");
    for (i = 0; i < tamanyo; i++) {
        imprimirCompra(c.compras[i]);
    }
    printf(".............................\n");
    printf("TOTAL: %.2f euros",c.importeTotal);
}

void devolverCarrito(Carrito *c){
    free(c->compras);
}

void modificarCarrito(Carrito *carrito,int ref, int cant,int tamanyo){
    int pos=0,enc=0;
    while (!enc && pos<tamanyo){
        if (carrito->compras[pos].producto.referencia == ref)
            enc = 1;
        else
            pos++;
    }
    if (enc){
        carrito->importeTotal -= carrito->compras[pos].producto.precio*carrito->compras[pos].cantidad;
        carrito->importeTotal += carrito->compras[pos].producto.precio*cant;
        modificarCompra(&carrito->compras[pos],cant);
    }
}