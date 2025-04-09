#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num, milhares, centenas, dezenas;
    printf ("Entre com um numero entre 1 e 3999: ");
    scanf ("%d", &num);
    printf ("\n");
    if (num < 1 || num > 3999) {
        printf ("Numero incorreto!");
        return 0;
    }
    printf ("%d = ", num);
    if (num >= 1000) {
        milhares = num / 1000;
        if (milhares == 1) {
            printf ("M");
        } else if (milhares == 2) {
            printf ("MM");
        } else if (milhares == 3) {
            printf ("MMM");
        }
        num = num % 1000;
    }
    if (num >= 100) {
        centenas = num / 100;
        if (centenas == 1) {
            printf ("C");
        } else if (centenas == 2) {
            printf ("CC");
        } else if (centenas == 3) {
            printf ("CCC");
        } else if (centenas == 4) {
            printf ("CD");
        } else if (centenas == 5) {
            printf ("D");
        } else if (centenas == 6) {
            printf ("DC");
        } else if (centenas == 7) {
            printf ("DCC");
        } else if (centenas == 8) {
            printf ("DCCC");
        } else if (centenas == 9) {
            printf ("CM");
        }
        num = num % 100;
    }
    if (num >= 10) {
        dezenas = num / 10;
        if (dezenas == 1) {
            printf ("X");
        } else if (dezenas == 2) {
            printf ("XX");
        } else if (dezenas == 3) {
            printf ("XXX");
        } else if (dezenas == 4) {
            printf ("XL");
        } else if (dezenas == 5) {
            printf ("L");
        } else if (dezenas == 6) {
            printf ("LX");
        } else if (dezenas == 7) {
            printf ("LXX");
        } else if (dezenas == 8) {
            printf ("LXXX");
        } else if (dezenas == 9) {
            printf ("XC");
        }
        num = num % 10;
    }
    if (num >= 1) {
        if (num == 1) {
            printf ("I");
        } else if (num == 2) {
            printf ("II");
        } else if (num == 3) {
            printf ("III");
        } else if (num == 4) {
            printf ("IV");
        } else if (num == 5) {
            printf ("V");
        } else if (num == 6) {
            printf ("VI");
        } else if (num == 7) {
            printf ("VII");
        } else if (num == 8) {
            printf ("VIII");
        } else if (num == 9) {
            printf ("IX");
        }
    }
    return 0;
}