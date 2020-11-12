/*Criar um vetor, via teclado, com 5 números inteiros. Exibir o vetor, calcular a média do vetor. 
Mostrar quantos números são múltiplos de 3. 
Quantos números são maiores que 3 e menores que 10. Qual o maior número do vetor.*/

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
int mediaVet(int x[]);
int maiorNumVet(int x[]);
int mult3(int x[]);
int comp3_10(int x[]);

//main
int main()
{
    // vetores
    int x[tamV], y[tamV]; 
    
    // invocando a funções
    preencherVet(x);
    printf("Vetor X: ");
    mostrarX(x);
    printf("\nA media do vetor é:  %d", mediaVet(x));
    printf("\nExistem %d numeros múltiplos de 3 neste vetor",mult3(x));
    printf("\nO maior numero do vetor é: %d", maiorNumVet(x));
    printf("\nA quantidade de numeros maiores que 3 e menores que 10 é de %d",comp3_10(x));
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

int mediaVet(int x[])
{
    int i=0, totalV=0, mediaV=0;

    for(i=0;i<tamV;i++)
    {
        totalV+=x[i];
    }
    mediaV=totalV/tamV;
    return mediaV;
}

int maiorNumVet(int x[])
{
    int i=0, maiorNV=0, aux=0;

    maiorNV=x[i];
    for(i=0;i<tamV;i++)
    {
    
        if(maiorNV<x[i])
        {
            maiorNV=x[i];    
        }
    }
    
    return maiorNV;
}

int mult3(int x[])
{
     int i=0, cont=0;


    for(i=0;i<tamV;i++)
    {
    
        if((x[i]%3)==0)
        {
            cont++;    
        }
    }
    
    return cont;
}

int comp3_10(int x[])
{
    int i=0, cont=0;


    for(i=0;i<tamV;i++)
    {
    
        if((x[i]>3) && (x[i]<10))
        {
            cont++;    
        }
    }
    
    return cont;
}