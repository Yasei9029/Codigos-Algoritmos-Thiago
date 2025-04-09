#include <stdio.h>
#include <stdlib.h>

int main(void){
    int anonasc;
    int anoatual;
    int idade;
    printf("Ano de nascimento: ");
    scanf("%d", &anonasc);
    printf("\n");
    printf("Ano atual: ");
    scanf("%d", &anoatual);
    printf("\n");
    idade = anoatual - anonasc;
    printf ("Idade aproximada: %d anos", idade);
    return 0;
}