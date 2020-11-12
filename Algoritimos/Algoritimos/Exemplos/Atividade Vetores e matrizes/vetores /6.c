/*Criar um vetor, via teclado, com 6 números inteiros. 
Mostrar o vetor e informar quantos números são maior que 10.
Imprimir a soma destes números e a somar todos os números.*/

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
int mostrarX(int x[]);
int contMaior10(int x[]);


//main
int main()
{
    // vetores
    int x[tamV], y[tamV]; 
    
    // invocando a funções
    preencherVet(x);
    printf("Vetor X: ");
    mostrarX(x);
    contMaior10(x);
  

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

int contMaior10(int x[])
{
    int i=0, cont10=0, soma10=0, somaT=0;

    for(i=0;i<tamV;i++)
    {
        if(x[i]>10)
        {
            soma10=soma10+x[i];
            cont10++;
        }
        somaT=somaT+x[i];
    }
    printf("\nSão %d numeros maiores que 10", cont10);
    printf("\nA soma destes numeros é: %d", soma10);
    printf("\nO valor total do vetor é: %d", somaT);

    return 0;
}