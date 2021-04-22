//
// Created by Iker Yañez Calderon on 22/4/21.
//

#ifndef EXAMEN_C_2014_PUNTO_H
#define EXAMEN_C_2014_PUNTO_H

typedef struct{
    int x,y;
}Punto;

float distancia(Punto p1, Punto p2);
void trasladarXY(Punto *p1, Punto *p2, int x, int y);

#endif //EXAMEN_C_2014_PUNTO_H
