#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num, i;
    int fatorial=1;
    printf("Numero: ");
    scanf("%d", &num);
    printf("\n");
    if (num>0){
        for (i=num; i>0; i--){
            fatorial=fatorial*i;
        }
        printf("%d! = %d", num, fatorial);
    }else if (num==0){
        fatorial=0;
        printf("%d! = %d", num, fatorial);
    }else{
        printf("Nao ha fatorial de numero negativo.");
    }
    return 0;
}