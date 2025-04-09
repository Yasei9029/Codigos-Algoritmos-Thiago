#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n;
    printf ("Forneca um numero maior ou igual a 0: ");
    scanf ("%d", &n);
    printf("\n");
    if(n>=0){
        for(n; n>=0; n--){
            printf("%d ", n);
        }
    }else{
          printf("Valor incorreto (negativo)");
    }
    return 0;
}