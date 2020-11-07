#include <stdio.h>

float multiplicaFloat(float n1, float n2)
{
    float resul;

    return resul=n1*n2;
}


int main()
{
    float n1, n2, resul;
    printf("digite seu n1: ");
    scanf("%f", &n1);
    printf("digite seu n2: ");
    scanf("%f", &n2);

    resul=multiplicaFloat(n1,n2);

    printf("esse é o resultado: %.2f", resul);
}