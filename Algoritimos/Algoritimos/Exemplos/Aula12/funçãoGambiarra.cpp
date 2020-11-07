#include<stdio.h>
#include<stdlib.h>



int mostrar(int a,int b )
{
int soma;

soma=a+b;
return soma;
}

int main()
{
    int x,y,soma;

    printf("digite o valor de X: ");
    scanf("%d", &x);

    printf("digite o valor de Y: ");
    scanf("%d", &y);

    soma=mostrar(x,y);

    printf("soma= %d", soma);
}