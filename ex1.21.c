#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    int depois;
    int antes;
    printf("Forneca um numero inteiro: ");
    scanf("%d", &num);
    printf("\n");
    depois = num + 1;
    antes = num - 1;
    printf("Sucessor de %d: %d\n", num, depois);
    printf("Antecessor de %d: %d", num, antes);
    return 0;
}