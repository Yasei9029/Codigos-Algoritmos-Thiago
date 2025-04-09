#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1, num2;
    printf("Entre com um numero: ");
    scanf("%f", &num1);
    printf("\n");
    printf("Entre com outro numero: ");
    scanf("%f", &num2);
    printf("\n");
    if(num1 + num2 > 10){
        printf("Os numeros fornecidos foram %.2f e %.2f", num1, num2);
    }
    else{
        printf("A subtracao entre %.2f e %.2f e igual a %.2f", num1, num2, num1 - num2);
    }
    return 0;
}