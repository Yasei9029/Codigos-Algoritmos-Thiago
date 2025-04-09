#include <stdio.h>
#include <stdlib.h>
int main(void){
    int l;
    int P;
    int A;
    printf ("Insira o tamanho do lado do quadrado: ");
    scanf ("%d", &l);
    printf("\n");
    P=4*l;
    A=l*l;
    printf ("Perimetro = %d\n", P);
    printf ("Area = %d", A);
    return 0;
}