#include <stdio.h>
#include <stdlib.h>

int main(void){
    float N1, N2, N3;
    printf ("N1: ");
    scanf ("%f", &N1);
    printf("\n");
    printf ("N2: ");
    scanf ("%f", &N2);
    printf("\n");
    printf ("N3: ");
    scanf ("%f", &N3);
    printf("\n");
    if (N1 >= N2 && N2 >= N3){
        printf ("A soma dos dois numeros maiores fornecidos e %.2f", N1 + N2);
    }
    else if (N1 >= N3 && N3 >= N2){
        printf ("A soma dos dois numeros maiores fornecidos e %.2f", N1 + N3);
    }
    else if (N2 >= N3 && N3 >= N1){
        printf ("A soma dos dois numeros maiores fornecidos e %.2f", N2 + N3);
    }
    else if (N2 >= N1 && N1 >= N3){
        printf ("A soma dos dois numeros maiores fornecidos e %.2f", N2 + N1);
    }
    else if (N3 >= N2 && N2 >= N1){
        printf ("A soma dos dois numeros maiores fornecidos e %.2f", N3 + N2);
    }
    else{
        printf ("A soma dos dois numeros maiores fornecidos e %.2f", N3 + N1);
    }
    return 0;
}