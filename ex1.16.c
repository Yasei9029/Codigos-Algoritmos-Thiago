#include <stdio.h>
#include <stdlib.h>

int main(void){
    float base;
    float altura;
    float area;
    printf("Valor da base: ");
    scanf ("%f", &base);
    printf("\n");
    printf("Valor da altura: ");
    scanf ("%f", &altura);
    printf("\n");
    area=base*altura/2;
    printf("Area = %.2f", area);
    return 0;
}