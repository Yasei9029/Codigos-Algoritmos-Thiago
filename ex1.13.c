#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1;
    float num2;
    float A;
    float S;
    float M;
    float D;
    printf("Primeiro numero: ");
    scanf("%f", &num1);
    printf("\n");
    printf("Segundo numero: ");
    scanf("%f", &num2);
    printf("\n");
    A = num1+num2;
    S = num1-num2;
    M = num1*num2;
    D = num1/num2;
    printf ("%.2f + %.2f = %.2f\n", num1, num2, A);
    printf ("%.2f - %.2f = %.2f\n", num1, num2, S);
    printf ("%.2f * %.2f = %.2f\n", num1, num2, M);
    printf ("%.2f / %.2f = %.2f", num1, num2, D);
    return 0;
}