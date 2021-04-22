//
// Created by Iker Yañez Calderon on 22/4/21.
//

#include "punto.h"
#include <math.h>

float distancia(Punto p1, Punto p2){
    float d;
    d = sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    return d;
}

void trasladarXY(Punto *p1, Punto *p2, int x, int y){
    p1->x += x;
    p2->x += x;
    p1->y += y;
    p2->y += y;
}