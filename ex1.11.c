#include <stdio.h>
#include <stdlib.h>

int main(void){
    int D;
    int d;
    int A;
    printf ("Insira o valor da diagonal maior do losango: ");
    scanf ("%d", &D);
    printf("\n");
    printf ("Insira o valor da diagonal menor do losango: ");
    scanf ("%d", &d);
    printf("\n");
    A=D*d/2;
    printf ("Area = %d", A);
    return 0;
}