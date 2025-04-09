#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num;
    printf ("Entre com um valor qualquer: ");
    scanf ("%f", &num);
    printf("\n");
    printf ("%f\n", num);
    printf ("%.2f\n", num);
    printf ("%.3f\n", num);
    return 0;
}