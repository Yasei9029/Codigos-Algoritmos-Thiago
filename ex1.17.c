#include <stdlib.h>
#include <stdio.h>

int main(void){
    float bmaior;
    float bmenor;
    float altura;
    float area;
    printf ("Valor da base maior: ");
    scanf ("%f", &bmaior);
    printf("\n");
    printf ("Valor da base menor: ");
    scanf ("%f", &bmenor);
    printf("\n");
    printf ("Valor da altura: ");
    scanf ("%f", &altura);
    printf("\n");
    area=(bmenor+bmaior)*altura/2;
    printf ("Area = %.2f", area);
    return 0;
}