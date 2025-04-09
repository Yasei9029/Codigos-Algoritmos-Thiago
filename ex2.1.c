#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    printf ("Entre com um numero: ");
    scanf ("%d", &num);
    printf("\n");
    if (num % 2 == 1){
        printf ("O numero %d e impar.", num);
    }else{
        printf ("O numero %d e par.", num);
    }
    
    return 0;
}