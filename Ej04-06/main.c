#include <stdio.h>
#include <math.h>

typedef struct{
    float r;
    float i;
}Complex;

void imprimirComplejo(Complex c);

Complex sumarComplejos(Complex x, Complex y);

float calcModulo(Complex c);

void restar(Complex a, Complex b);

void restar2(Complex *a, Complex b);


int main(){
    int opcion;
    printf("Elige una opcion:\n");
    printf("1.- Ej04-06\n");
    printf("2.- Ej08\n");
    scanf("%d",&opcion);
    if (opcion == 1){ //Ej04-06
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
    else if (opcion == 2){ //Ej08
        float r,i,r2,i2;
        printf("Introduce la parte real: ");
        scanf("%f",&r);
        printf("Introduce la parte imaginaria: ");
        scanf("%f",&i);
        Complex c = {r,i};
        printf("Introduce otra parte real: ");
        scanf("%f",&r2);
        printf("Introduce otra parte imaginaria: ");
        scanf("%f",&i2);
        Complex c2 = {r2,i2};
        restar(c,c2);
        printf("Resultado de la resta utilizando la funcion restar: ");
        imprimirComplejo(c);
        restar2(&c,c2);
        printf("Resultado de la resta utilizando la funcion restar2: ");
        imprimirComplejo(c);
    }else{
        printf("No se ha introducido una opcion correcta");
        main();
    }
    return 0;
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

void restar(Complex a, Complex b){
    a.r -= b.r;
    a.i -= b.i;
}

void restar2(Complex *a, Complex b){
    (*a).r -= b.r;
    (*a).i -= b.i;
}