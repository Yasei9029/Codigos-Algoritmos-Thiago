#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n1, n2, i;
    int pares=0;
    printf("N1: ");
    scanf("%d", &n1);
    printf("\n");
    printf("N2: ");
    scanf("%d", &n2);
    printf("\n");
    if (n2>=n1){
        for (i=n1; i<=n2; i++){
            if (i%2 == 0){
            pares=pares+1;
            }
        }
        printf("Numeros pares entre %d e %d: %d", n1, n2, pares);
    }else{
        for (i=n2; i<=n1; i++){
            if (i%2 == 0){
            pares=pares+1;
            }
        }
        printf("Numeros pares entre %d e %d: %d", n2, n1, pares);
    }
    return 0;
}