#include <stdio.h>
#include <stdlib.h>

int main(void){
    int l;
    int h;
    int P;
    int A;
    printf ("Insira o tamanho da largura do retangulo: ");
    scanf ("%d", &l);
    printf("\n");
    printf ("Insira o tamanho da altura do retangulo: ");
    scanf ("%d", &h);
    printf("\n");
    P=2*l+2*h;
    A=l*h;
    printf ("Perimetro = %d\n", P);
    printf ("Area = %d", A);
    return 0;
}