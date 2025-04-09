#include <stdio.h>
#include <stdlib.h>

int main(void){
    float salariobruto;
    float salarioliquido;
    float valoraula;
    float INSS;
    int aulas;
    printf("Valor da hora/aula: ");
    scanf("%f", &valoraula);
    printf("\n");
    printf("Quantidade de aulas: ");
    scanf("%d", &aulas);
    printf("\n");
    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &INSS);
    printf("\n");
    salariobruto = aulas * valoraula;
    salarioliquido = salariobruto * (100 - INSS)/100;
    printf("Salario Liquido: %.2f", salarioliquido);
    return 0;
}