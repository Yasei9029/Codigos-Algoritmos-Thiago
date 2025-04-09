#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n1, n2, i;
    int dois=0;
    int tres=0;
    int quatro=0;
    printf("N1: ");
    scanf("%d", &n1);
    printf("\n");
    printf("N2: ");
    scanf("%d", &n2);
    printf("\n");
    if (n2>=n1){
        for (i=n1; i<=n2; i++){
            if (i%2 == 0){
            dois=dois+1;
            }
            if (i%3 == 0){
            tres=tres+1;
            }
            if (i%4 == 0){
            quatro=quatro+1;
            }
        }
    }else{
        for (i=n2; i<=n1; i++){
            if (i%2 == 0){
            dois=dois+1;
            }
            if (i%3 == 0){
            tres=tres+1;
            }
            if (i%4 == 0){
            quatro=quatro+1;
            }
        }
    }
    printf("Multiplos de 2: %d\n", dois);
    printf("Multiplos de 3: %d\n", tres);
    printf("Multiplos de 4: %d", quatro);
    return 0;
}