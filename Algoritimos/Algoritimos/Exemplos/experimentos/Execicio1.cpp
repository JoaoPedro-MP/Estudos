/*
Exercicio 1 - Reposição de Aula 
Feito Por: João Pedro Marin
data 08/11/2020
Erros: uso de variavel global e numero aleatorio é gerado porém usei uma gambiarra no printf final pois o vetor é inteiramente tomado pelo primeiro numero aleatorio 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i=1;
int geraRand()
{
    int rn=0;
    srand( (unsigned)time(NULL));
    rn=(1+rand()%10);
    return rn;
}

int main()
{
    int N[11];
    if(i<=10)
    {
    printf("\nO numero da posição %d é %d", i, (N[i]=i+geraRand()));
    i++;
    main();    
    }
    
}