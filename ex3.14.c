#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n1, n2, i;
    int somatoria=0;
    printf("N1: ");
    scanf("%d", &n1);
    printf("\n");
    printf("N2: ");
    scanf("%d", &n2);
    printf("\n");
    if (n2>=n1){
        for (i=n1; i<=n2; i++){
            somatoria = somatoria + i;
        }
        printf("Somatorio entre %d e %d: %d", n1, n2, somatoria);
    }else{
        for (i=n2; i<=n1; i++){
            somatoria = somatoria + i;
        }
        printf("Somatorio entre %d e %d: %d", n2, n1, somatoria);
    }
    return 0;
}