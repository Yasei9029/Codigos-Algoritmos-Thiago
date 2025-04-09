#include <stdio.h>
#include <stdlib.h>

int main(void){
    float dmaior;
    float dmenor;
    float area;
    printf ("Valor da diagonal maior: ");
    scanf ("%f", &dmaior);
    printf("\n");
    printf ("Valor da diagonal menor: ");
    scanf ("%f", &dmenor);
    printf("\n");
    area = dmaior * dmenor / 2;
    printf ("Area = %.2f", area);
    return 0;
}