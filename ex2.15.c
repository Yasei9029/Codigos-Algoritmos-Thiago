#include <stdio.h>
#include <stdlib.h>

int main(void){
    int idade;
    printf("Entre com sua idade: ");
    scanf("%d", &idade);
    printf("\n");
    if(idade < 16){
        printf("Nao eleitor.");
    }else if (idade >= 18 && idade <= 65){
        printf("Eleitor obrigatorio.");
    }else{
        printf("Eleitor facultativo.");
    }
    return 0;
}