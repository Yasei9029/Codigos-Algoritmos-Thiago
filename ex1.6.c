#include <stdio.h>
#include <stdlib.h>
int main(void){
    int N1;
    int N2;
    int adicao;
    int subtracao;
    int multiplicacao;
    int divisao;
    printf ("Insira o primeiro digito: ");
    scanf ("%d", &N1);
    printf("\n");
    printf ("Insira o segundo digito: ");
    scanf ("%d", &N2);
    printf("\n");
    adicao= N1+N2;
    subtracao= N1-N2;
    multiplicacao= N1*N2;
    divisao= N1/N2;
    printf ("%d + %d = %d\n", N1, N2, adicao);
    printf ("%d - %d = %d\n", N1, N2, subtracao);
    printf ("%d * %d = %d\n", N1, N2, multiplicacao);
    printf ("%d / %d = %d\n", N1, N2, divisao);
    return 0;
}