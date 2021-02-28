#include <stdio.h>

typedef struct{
    int x;
    int y;
}Punto;

void incrementa(Punto *p, int a);

int main() {
    Punto p1 = {4,5};
    incrementa(&p1,10);
    printf("X: %d, Y: %d",p1.x,p1.y);
    return 0;
}

void incrementa(Punto *p, int a){
    (*p).x+=a;
    (*p).y+=a;
}