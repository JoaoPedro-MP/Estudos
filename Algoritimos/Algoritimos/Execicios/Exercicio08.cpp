#include <stdlib.h>
#include <stdio.h>

int main()
{
    float m, km, hm, dam, dm, cm, mm;

    printf("digite o quantos metros você quer converter: ");
    scanf("%f", &m);

    km=m/1000;
    hm=m*0.0099999998;
    dam=m/10;
    dm=m*10;
    cm=m*100;
    mm=m*1000;

    printf("A distância de %.2f m corresponde a:", m);
    printf("\n%.4f Km", km);
    printf("\n%.4f Hm", hm);
    printf("\n%.4f Dam", dam);
    printf("\n%.4f dm", dm);
    printf("\n%.4f cm", cm);
    printf("\n%.4f mm", mm);
}