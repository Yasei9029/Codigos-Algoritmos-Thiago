#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    float ftemp;
    float ctemp;
    printf ("Temperatura em graus Fahrenheit: ");
    scanf ("%f", &ctemp);
    printf("\n");
    ftemp = 1.8*ctemp+32;
    printf ("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", ctemp, ftemp);
    return 0;
}