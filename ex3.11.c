#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N1, N2, i;
    printf("N1: ");
    scanf("%d", &N1);
    printf("\n");
    printf("N2: ");
    scanf("%d", &N2);
    printf("\n");
    if (N1<=N2){
        for (i=N1; i<=N2; i++){
            printf ("%d ", i);
        }
    }else{
        for (i=N1; i>=N2; i--){
            printf ("%d ", i);
        }
    }
    return 0;
}