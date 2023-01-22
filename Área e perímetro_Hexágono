#include <stdio.h> 
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro);

int main(void) {
    float a, p, l, *perimetro=&p, *area=&a;
    printf("Determine o valor de l: ");
    scanf("%f", &l);
    calcula_hexagono(l, area, perimetro);
    printf("Área: %f\n Perímetro: %f\n", a, p);
    return 0;
}

void calcula_hexagono(float l, float *area, float *perimetro){
    *area=(3*pow(l, 2)*sqrt(3))/2;
    *perimetro=(6*l);
}
