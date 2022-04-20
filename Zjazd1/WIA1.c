#include <stdio.h>

int main()
{
    long liczbadziesietna, iloraz, reszta;
    int x,y=0;
    char liczbadwunastkowa[10];

    printf ("Podaj liczbe w systemie dziesietnym\n");
    scanf("%ld",&liczbadziesietna);
    iloraz=liczbadziesietna;

    while(iloraz != 0)
    {
        reszta = iloraz%12;
        if(reszta < 10)
            liczbadwunastkowa[y++] = 48 + reszta;
        else
            liczbadwunastkowa[y++] = 55 + reszta;
        iloraz = iloraz/12;
    }

    printf("Ta liczba w systemie dwunastkowym wynosi: \n");
    for(x=(y-1); x>=0; x--)
    {
        printf("%c",liczbadwunastkowa[x]);
    }
    return 0;
}
