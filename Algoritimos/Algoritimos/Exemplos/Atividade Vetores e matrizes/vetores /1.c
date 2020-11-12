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
int mostrarX(int x[]);
int mostrarY(int y[]);
int invertVet(int x[],int y[]);

//main
int main()
{
    // vetores
    int x[tamV], y[tamV]; 
    
    // invocando a funções
    preencherVet(x);
    printf("Vetor X: ");
    mostrarX(x);
    invertVet(x,y);
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
int mostrarX(int x[])
{
    int i=0;

    for(i=0;i<tamV;i++)
    {
        printf("%d ", x[i]);
    }
    return 0;
}
int invertVet(int x[],int y[])
{
    int i=0, i2=tamV-1;

    while (i<tamV)
    {
        y[i]=x[i2];
        i=i+1;
        i2=i2-1;
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
#include<stdio.h>

//constantes
const int tamV=5;

// Declarações de funções
int preencherVet(int x[]);
int mostrarX(int x[]);
int mostrarY(int y[]);
int invertVet(int x[],int y[]);

//main
int main()
{
    // vetores
    int x[tamV], y[tamV]; 
    
    // invocando a funções
    preencherVet(x);
    printf("Vetor X: ");
    mostrarX(x);
    invertVet(x,y);
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
int mostrarX(int x[])
{
    int i=0;

    for(i=0;i<tamV;i++)
    {
        printf("%d ", x[i]);
    }
    return 0;
}
int invertVet(int x[],int y[])
{
    int i=0, i2=tamV-1;

    while (i<tamV)
    {
        y[i]=x[i2];
        i=i+1;
        i2=i2-1;
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

