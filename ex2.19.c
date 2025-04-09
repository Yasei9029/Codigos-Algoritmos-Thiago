#include <stdio.h>
#include <stdlib.h>

int main(void){
    char opcao;
    float celsius, fahrenheit;
    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("C) Celsius -> Fahrenheit;\n");
    printf("F) Fahrenheit -> Celsius.\n");
    printf("Opcao: ");
    scanf(" %c", &opcao);
    printf ("\n");
    switch(opcao) {
        case 'C':
        case 'c':
            printf("Entre com a temperatura em graus Celsius: ");
            scanf("%f", &celsius);
            printf ("\n");
            fahrenheit = 1.8 * celsius + 32;
            printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", celsius, fahrenheit);
            break;
        case 'F':
        case 'f':
            printf("Entre com a temperatura em graus Fahrenheit: ");
            scanf("%f", &fahrenheit);
            printf ("\n");
            celsius = (fahrenheit - 32) / 1.8;
            printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", fahrenheit, celsius);
            break;    
        default:
            printf("Opcao invalida!");
    }
    return 0;
}