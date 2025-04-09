#include <stdio.h>
#include <stdlib.h>

int main(void){
    int homem1, homem2, mulher1, mulher2;
    printf("Idade Homem 1: ");
    scanf("%d", &homem1);
    printf("\n");
    printf("Idade Homem 2: ");
    scanf("%d", &homem2);
    printf("\n");
    printf("Idade Mulher 1: ");
    scanf("%d", &mulher1);
    printf("\n");
    printf("Idade Mulher 2: ");
    scanf("%d", &mulher2);
    printf("\n");
    if (homem1>homem2 && mulher1>mulher2){
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", homem1+mulher2);
        printf("Idade homem mais novo * idade mulher mais velha: %d", homem2*mulher1);
    }else if (homem1>homem2 && mulher2>mulher1){
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", homem1+mulher1);
        printf("Idade homem mais novo * idade mulher mais velha: %d", homem2*mulher2);
    }else if (homem2>homem1 && mulher1>mulher2){
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", homem2+mulher2);
        printf("Idade homem mais novo * idade mulher mais velha: %d", homem1*mulher1);
    }else{
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", homem2+mulher1);
        printf("Idade homem mais novo * idade mulher mais velha: %d", homem1*mulher2);
    }
    return 0;
}