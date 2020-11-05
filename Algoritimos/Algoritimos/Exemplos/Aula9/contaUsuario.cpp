#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont=0, N=0, salto=0;

    printf("Digite até qual numero você quer contar: ");
    scanf("%d", &N);

    printf("digite o salto de exibição entre os numeros: ");
    scanf("%d", &salto);
    
    while(cont<=N)
    {
        printf("%d\n", cont);
        cont=cont+salto;
    }
    printf("Acabou");
}