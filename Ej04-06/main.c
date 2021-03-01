#include <stdio.h>
#include <math.h>

typedef struct{
    float r;
    float i;
}Complex;

void imprimirComplejo(Complex c);

Complex sumarComplejos(Complex x, Complex y);

float calcModulo(Complex c);

int main(){
    float r,i,r2,i2;
    printf("Introduce la parte real: ");
    scanf("%f",&r);
    printf("Introduce la parte imaginaria: ");
    scanf("%f",&i);
    Complex c = {r,i};
    printf("El numero introducido es: ");
    imprimirComplejo(c);printf("\n");
    printf("Introduce otra parte real: ");
    scanf("%f",&r2);
    printf("Introduce otra parte imaginaria: ");
    scanf("%f",&i2);
    Complex c2 = {r2,i2};
    imprimirComplejo(c);printf("\n");
    printf("La suma de los complejos introducidos es: ");
    Complex c3 = sumarComplejos(c,c2);
    imprimirComplejo(c3);
    printf("\n");
    float mod = calcModulo(c3);
    printf("Su modulo es: %f\n",mod);
    printf("Tamanyo de un float: %d\n", sizeof(mod));
    printf("Tamanyo de un complejo: %d\n", sizeof(c3));
}

void imprimirComplejo(Complex c){
    printf("(%f,%fi)",c.r,c.i);
}

Complex sumarComplejos(Complex x, Complex y){
    Complex z;
    z.r = x.r + y.r;
    z.i = x.i + y.i;
    return z;
}

float calcModulo(Complex c){
    float mod = sqrt((c.r*c.r)+(c.i*c.i));
    return mod;
}