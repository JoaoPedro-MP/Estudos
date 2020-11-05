#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=0, sucessor=0, antecessor=0;

    printf("Digite o numero que você quer descobrir o antecessor e o sucessor: ");
    scanf("%d", &N);

    antecessor=N-1;
    sucessor=N+1;

    printf("O antecessor de %d é %d\nO sucessor de %d é %d", N, antecessor, N, sucessor);
}