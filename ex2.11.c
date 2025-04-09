#include <stdio.h>
#include <stdlib.h>

int main(void){
    float alfa, beta, gama;
    printf("alfa: ");
    scanf("%f", &alfa);
    printf("\n");
    printf("beta: ");
    scanf("%f", &beta);
    printf("\n");
    printf("gama: ");
    scanf("%f", &gama);
    printf("\n");
    if ((alfa + beta + gama) == 180){
        if(alfa==90 || beta==90 || gama==90){
            printf("Triangulo RETANGULO");
        }else if (alfa<90 && beta<90 && gama<90){
            printf("Triangulo ACUTANGULO");
        }else{
            printf("Triangulo OBTUSANGULO");
        }
    }else{
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
    }
    return 0;
}