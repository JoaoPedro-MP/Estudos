/*
Feito por: João Pedro Marin Pinaffi
Data: 07/11/2020
*/
#include<stdio.h>

int main()
{
    int vetor[5], i;

    for(i=1;i<=5;i++)
    {
        printf("Digite o numero da posição %d do vetor: ",i);
        scanf("%d", &vetor[i]);
    }

    for(i=1;i<=5;i++)
    {
        printf("O numero da posição %d do vetor é %d \n",i,vetor[i]);
        
    }
}


