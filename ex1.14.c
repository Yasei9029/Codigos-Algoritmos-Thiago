#include <stdio.h>
#include <stdlib.h>

int main(void){
    float lado;
    float area;
    float perimetro;
    printf("Valor do lado: ");
    scanf("%f", &lado);
    printf("\n");
    perimetro = lado*4;
    area = lado*lado;
    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);
    return 0;
}