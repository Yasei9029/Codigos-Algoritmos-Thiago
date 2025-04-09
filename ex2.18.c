#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1, num2;
    char operacao;
    printf("N1: ");
    scanf("%f", &num1);
    printf("N2: ");
    scanf("%f", &num2);
    printf("\nEscolha uma operacao de acordo com o menu:\n");
    printf("+) Adicao;\n");
    printf("-) Subtracao;\n");
    printf("*) Multiplicacao;\n");
    printf("/) Divisao.\n");
    printf("Operacao: ");
    scanf(" %c", &operacao);
    switch (operacao) {
        case '+':
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, num1*num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, num1/num2);
            }
            break;
        default:
            printf("\nOpcao invalida!\n");
    }
    return 0;
}