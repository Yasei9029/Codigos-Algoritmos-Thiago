#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N1, N2, N3;
    printf ("N1: ");
    scanf ("%d", &N1);
    printf("\n");
    printf ("N2: ");
    scanf ("%d", &N2);
    printf("\n");
    printf ("N3: ");
    scanf ("%d", &N3);
    printf("\n");
    if (N1 >= N2 && N2 >= N3){
        printf ("%d >= %d >= %d", N1, N2, N3);
    }
    else if (N1 >= N3 && N3 >= N2){
        printf ("%d >= %d >= %d", N1, N3, N2);
    }
    else if (N2 >= N3 && N3 >= N1){
        printf ("%d >= %d >= %d", N2, N3, N1);
    }
    else if (N2 >= N1 && N1 >= N3){
        printf ("%d >= %d >= %d", N2, N1, N3);
    }
    else if (N3 >= N2 && N2 >= N1){
        printf ("%d >= %d >= %d", N3, N2, N1);
    }
    else{
        printf ("%d >= %d >= %d", N3, N1, N2);
    }
    return 0;
}