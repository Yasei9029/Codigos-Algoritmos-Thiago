#include <stdio.h>
#include <stdlib.h>

int main(void){
    float lados, medida;
    printf("Entre com a quantidade de lados: ");
    scanf("%f", &lados);
    printf("\n");
    printf("Entre com a medida do lado: ");
    scanf("%f", &medida);
    printf("\n");
    if (lados == 3){
        printf("TRIANGULO de perimetro %.2f", medida*3);
    } else if (lados == 4){
        printf("QUADRADO de area %.2f", medida*medida);
    } else if (lados == 5){
        printf("PENTAGONO");
    } else{
        printf("Poligono nao identificado");
    }
    return 0;
}