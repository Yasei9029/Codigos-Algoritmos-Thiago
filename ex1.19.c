#include <stdio.h>
#include <stdlib.h>

int main(void){
    float r;
    float D;
    float C;
    float A;
    printf("Valor do raio do circulo: ");
    scanf("%f", &r);
    printf("\n");
    D = 2*r;
    C = 6.283185 *r;
    A = 3.141592 *r*r;
    printf("Diametro = %.2f\n", D);
    printf("Circunferencia = %.2f\n", C);
    printf("Area = %.2f", A);
    return 0;
}