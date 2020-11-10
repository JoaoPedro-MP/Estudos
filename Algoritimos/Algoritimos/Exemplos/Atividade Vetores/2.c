/*
Feito por: João Pedro Marin Pinaffi
Data: 09/11/2020
*/


//Bibliotecas
#include<stdio.h>

//constantes
const int tamV=5;

// Declarações de funções
int preencherVet(int x[]);
int copVet(int x[], int y[]);
int confVet(int y[]);
int mostrarX(int x[]);
int mostrarY(int y[]);


//main
int main()
{
    // vetores
    int x[tamV], y[tamV]; 
    
    // invocando a funções
    preencherVet(x);
    copVet(x,y);
    confVet(y);
    printf("Vetor X: ");
    mostrarX(x);
    printf("\nVetor Y: ");
    mostrarY(y);
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

int copVet(int x[], int y[])
{
    int i=0;

    for(i=0;i<tamV;i++)
    {
        y[i]=x[i];
    }
    
    return 0;
}

int confVet(int y[])
{
    int i=0;

    for(i=0;i<tamV;i++)
    {
        if(y[i]%2==0)
        {
            y[i]=y[i]*3;    
        }else
        {
            y[i]=y[i]+1;
        }
        
    }
    
    return 0;
}

int mostrarX(int x[])
{
    int i=0;

    for(i=0;i<tamV;i++)
    {
        printf("%d ", x[i]);
    }
    return 0;
}

int mostrarY(int y[])
{
    int i=0;

    for(i=0;i<tamV;i++)
    {
        printf("%d ", y[i]);
    }
    return 0;
}