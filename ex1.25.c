#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    float ftemp;
    float ctemp;
    printf ("Temperatura em graus Fahrenheit: ");
    scanf ("%f", &ftemp);
    printf("\n");
    ctemp = (ftemp - 32)/1.8;
    printf ("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", ftemp, ctemp);
    return 0;
}