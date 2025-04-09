#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num;
    printf("Entre com um valor: ");
    scanf("%f", &num);
    printf("\n");
    if (num > 20){
        printf("A metade de %.2f e %.2f", num, num/2);
    }
    else{
        printf("O triplo de %.2f e %.2f", num, num*3);
    }
    return 0;
}