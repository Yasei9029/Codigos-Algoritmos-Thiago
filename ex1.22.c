#include <stdio.h>
#include <stdlib.h>

int main(void){
    float preco;
    float pvenda;
    printf("Valor do produto: ");
    scanf("%f", &preco);
    printf("\n");
    pvenda = preco * 0.91;
    printf("Preco de venda com 9%% de desconto: %.2f", pvenda);
    return 0;
}