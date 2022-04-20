#include <stdio.h>
#include <stdlib.h>

int zmianabitu(unsigned short X,int P){

    _Bool n;
    unsigned short maska,maska1;
    int Y;

    maska=0x01;
    maska = maska << P;

    Y=X^maska;

    printf("Liczba po zmianie bitu: ");
    printf("%d", Y);

    n=Y&maska;

    printf("\nNowa wartosc bitu: ");
    printf("%d",n);

    return Y;

}

int main(void) {
    unsigned short X;
    int P;

    printf("Podaj liczbe w dziesietnym systemie liczbowym: ");
    scanf("%d", &X);

    printf("Na ktorym miejscu tej liczby chcesz zmienic bit: ");
    scanf("%d", &P);

    zmianabitu(X,P);

    return 0;
}
