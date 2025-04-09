#include<stdio.h>
#include<stdlib.h>

int main(void){
    int temp = 0;
    int a = 0;
    int b = 1;
    for (int i=0; i<20; i++){
        temp=a;
        a=a+b;
        b=temp;
        printf("%d ", a);
    }
    return 0;
}