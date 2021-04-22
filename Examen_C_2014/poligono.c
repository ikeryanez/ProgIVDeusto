//
// Created by Iker Yañez Calderon on 22/4/21.
//

#include "poligono.h"

void imprimirPoligono(Poligono poli){
    int i;
    for (i = 0; i < poli.numVertices; i++) {
        printf("(%d,%d)\n",poli.vertices[i].x,poli.vertices[i].y);
    }
}

float perimetro(Poligono poli){
    float suma = 0;
    int i;
    for (i = 0; i < poli.numVertices-1; i++) {
        suma += distancia(poli.vertices[i],poli.vertices[i+1]);
    }
    suma += distancia(poli.vertices[i],poli.vertices[0]);
    return suma;
}

void liberar(Poligono *poli){
    free(poli->vertices);
}

void copiarPoligono(Poligono poli1, Poligono *poli2){
    int i;
    poli2->numVertices=poli1.numVertices;
    poli2->vertices = (Punto *) malloc(poli2->numVertices* sizeof(Punto));
    for (i = 0; i < poli2->numVertices; i++) {
        poli2->vertices[i] = poli1.vertices[i];
    }
}

void anadirVertice(Poligono *poli, Punto p){
    int i;
    Poligono poli2;
    copiarPoligono(*poli,&poli2);
    liberar(&poli);
    poli->vertices = (Punto *)malloc((poli2.numVertices+1)* sizeof(Punto));
    for (i = 0; i < poli->numVertices; i++) {
        poli->vertices[i] = poli2.vertices[i];
    }
    poli->vertices[i] = p;
    poli->numVertices++;
    liberar(&poli2);
}

