/*
Feito por: João Pedro Marin Pinaffi
Data: 07/11/2020
*/
#include<stdio.h>

int main()
{
    int vetor[8], i, totalPar=0;

    for(i=1;i<=7;i++)
    {
        printf("Digite o numero da posição %d do vetor: ",i);
        scanf("%d", &vetor[i]);
        if((vetor[i]%2)==0)
        {
            printf("o Numero %d é par\n", vetor[i]);
            totalPar++;
        }else
        {
            printf("o Numero %d é impar\n", vetor[i]);
        }
        
    }
    
    for(i=1;i<=7;i++)
    {
        if((vetor[i]%2)==0)
        {
            printf("Tem numeros pares nas posições %d\n", i);
        }
    }
printf("O total de numeros pares é %d", totalPar);
}
