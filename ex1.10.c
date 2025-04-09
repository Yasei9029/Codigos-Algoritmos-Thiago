#include <stdlib.h>
#include <stdio.h>

int main(void){
    int b;
    int B;
    int h;
    int A;
    printf ("Insira a base maior do trapezio: ");
    scanf ("%d", &B);
    printf("\n");
    printf ("Insira a base menor do trapezio: ");
    scanf ("%d", &b);
    printf("\n");
    printf ("Insira a altura do trapezio: ");
    scanf ("%d", &h);
    printf("\n");
    A=(b+B)*h/2;
    printf ("Area = %d", A);
    return 0;
}