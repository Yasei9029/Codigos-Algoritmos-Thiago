#include <stdio.h>
#include <stdlib.h>

int main(void){
    float nota1, nota2, notaopt, media;
    printf ("Nota Av. 1: ");
    scanf("%f", &nota1);
    printf("\n");
    printf ("Nota Av. 2: ");
    scanf("%f", &nota2);
    printf("\n");
    printf ("Nota Optativa: ");
    scanf("%f", &notaopt);
    printf("\n");
    if (nota1>notaopt && nota2>notaopt){
        media = (nota1 + nota2)/2;
    }else if (nota1>notaopt && nota2<notaopt){
        media = (nota1 + notaopt)/2;
    }else if (nota1<notaopt && nota2>notaopt){
        media = (nota2 + notaopt)/2;
    }else if (nota1>nota2){
        media = (nota1 + notaopt)/2;
    }else{
        media = (nota2 + notaopt)/2;
    }
    printf("Media: %.2f\n", media);
    if (media >= 6){
        printf ("Aprovado!");
    }else if(4 <= media && media < 6){
        printf ("Exame.");
    }else{
        printf ("Reprovado...");
    }
    return 0;
}