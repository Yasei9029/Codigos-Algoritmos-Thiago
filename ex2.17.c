#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf("Entre com um valor inteiro: ");
    scanf("%d", &num);
    printf ("\n");
    switch(num) {
        case 2:
        case 4:
        case 6:
        case 8:
            printf("O valor fornecido foi %d.", num);
            break;
        default:
            printf("Valor invalido.");
    }
    return 0;
}