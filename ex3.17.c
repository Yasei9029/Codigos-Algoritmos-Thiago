#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n, i;
    int temp=0;
    int a=0;
    int b=1;
    printf("Termo desejado: ");
    scanf("%d", &n);
    printf("\n");
    if (n>=0){
        for (i=0; i<=n; i++){
            temp=a;
            a=a+b;
            b=temp;
        }
        printf("Fibonacci de %d e %d", n, a);
    }else{
        printf("Nao ha Fibonacci de numero negativo.");
    }

    return 0;
}