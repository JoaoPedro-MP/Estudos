/*Criar um vetor, via teclado, com 6 números inteiros, 
solicitar um número do teclado. Verificar se esse 
número existe no vetor. Se existir, imprimir em qual posição do vetor. 
Se não existir, imprimir uma mensagem que não existe.*/

/*
Feito por: João Pedro Marin Pinaffi
Data: 09/11/2020
*/


//Bibliotecas
#include<stdio.h>

//constantes
const int tamV=6;

// Declarações de funções
int preencherVet(int x[]);
int localizarN(int x[]);



//main
int main()
{
    // vetores
    int x[tamV], y[tamV]; 
    
    // invocando a funções
    preencherVet(x);
    localizarN(x);
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

int localizarN(int x[])
{
    int i=0 ,n=0, t=0;

    printf("Digite um numero para localizar no vetor: ");
    scanf("%d", &n);

    for(i=0;i<tamV;i++)
    {
        if(n==x[i])
        {
            printf("\nSeu numero é igual o numero da posição %d que é %d", i, n);
            t=1;     
        }
        
    }
    // gambiarra
    if(t==0)
    {
     printf("não existe");   
    }

    return 0;
}