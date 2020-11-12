/*
Receber via teclado 5 valores inteiros quaisquer de um vetor A. 
Após a leitura o programa deve copiar para um vetor B os
elementos de A em ordem crescente.
*/

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
int orgVet(int y[]);
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
    orgVet(y);
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

int orgVet(int y[])
{
    int i=0, j=0, aux=0;

   for (int i = 0; i < tamV; i++)
            {
                for (int j = 0; j < tamV; j++)
                {
                    if (y[i]<y[j])
                    {
                        aux = y[i];
                        y[i] = y[j];
                        y[j] = aux;
                    }
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

