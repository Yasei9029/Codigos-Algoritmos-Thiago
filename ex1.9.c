#include <stdio.h>
#include <stdlib.h>

int main(void){
    int b;
    int h;
    int A;
    printf("Insira a base do triangulo: ");
    scanf ("%d", &b);
    printf("\n");
    printf("Insira a altura do triangulo: ");
    scanf ("%d", &h);
    printf("\n");
    A=b*h/2;
    printf("Area = %d", A);
    return 0;
}