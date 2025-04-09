#include <stdio.h>
#include <stdlib.h>

int main(void){
    float a, b, c, m1, m2, m3;
    printf("a: ");
    scanf("%f", &a);
    printf("\n");
    printf("b: ");
    scanf("%f", &b);
    printf("\n");
    printf("c: ");
    scanf("%f", &c);
    printf("\n");
    m1=a-b;
    m2=a-c;
    m3=b-c;
    if(m1<0){
        m1 == m1*(-1);
    }
    if(m2<0){
        m2 == m2*(-1);
    }
    if(m3<0){
        m3 == m3*(-1);
    }
    if((m1 < c) && (c < a + b)||(m2 < b) && (b < a + c)||(m3 < a) && (a < b + c)){
        if((a==b)&&(b==c)){
            printf("Triangulo EQUILATERO");
        }else if((a==b)||(a==c)||(b==c)){
            printf("Triangulo ISOSCELES");
        }else{
            printf("Triangulo ESCALENO");
        }
    }else{
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }
    return 0;
}