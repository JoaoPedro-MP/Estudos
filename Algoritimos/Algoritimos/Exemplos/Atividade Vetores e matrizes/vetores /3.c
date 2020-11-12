/*
Feito por: João Pedro Marin Pinaffi
Data: 09/11/2020
*/


//Bibliotecas
#include<stdio.h>

//constantes
const int tamV=4;

// Declarações de funções
int preencherVet(int x[]);
int confVet(int x[]);

//main
int main()
{
    // vetores
    int x[tamV], y[tamV]; 
    
    //variaveis
    int maior=0;

    // invocando a funções
    preencherVet(x);
    maior=confVet(x);
    printf("O maior valor do vetor é: %d", maior);
    
}


// funções
int preencherVet(int x[])

{
    //variaveis
    int i=0;

    //loop de indice do vetor
    for(i=0;i<tamV;i++)
    {
        printf("Digite o %d° numero: ",i+1);
        scanf("%d", &x[i]);     //preenchendo o Vetor
        
    }
    return 0;
}

int confVet(int x[])
{
    int i=0, maior=0;

    for(i=0;i<tamV;i++)
    {
        if(maior<x[i])
        {
              maior=x[i];
        }
        
    }
    
    return maior;
}

