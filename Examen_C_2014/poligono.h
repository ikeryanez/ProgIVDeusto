//
// Created by Iker Yañez Calderon on 22/4/21.
//

#ifndef EXAMEN_C_2014_POLIGONO_H
#define EXAMEN_C_2014_POLIGONO_H

#include "punto.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int numVertices;
    Punto *vertices;
}Poligono;

void imprimirPoligono(Poligono poli);
float perimetro(Poligono poli);
void liberar(Poligono *poli);
void copiarPoligono(Poligono poli1, Poligono *poli2);
void anadirVertice(Poligono *poli, Punto p);

#endif //EXAMEN_C_2014_POLIGONO_H
