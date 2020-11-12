/*
Feito por: João Pedro Marin Pinaffi
Data: 11/11/2020

Crie um programa em C que peça 10 números, armazene eles 
em um vetor e diga qual elemento é o maior, e seu valor.
*/

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// const
#define tamV 10

//declaração de função
int preencherV(int V[]); 

int main()
{
    //vetor
    int V[tamV];

    //variaveis
    int escolha=0;

    printf("Exercicios de matrizes e vetores");
    printf("\nExercicio 0");
    printf("\nExercicio 1");
    printf("\nExercicio 2");
    printf("\nExercicio 3");
    printf("\nExercicio 4");
    printf("\nExercicio 5");
    printf("\nDesafio 01");
    printf("\nDesafio 02");
    printf("\nSair = 30");
    printf("\nescolha o exercicio que você quer executar: ");
    scanf("%d", &escolha);
    
    
    
    
    switch (escolha)
    {
    case 0:
        /* code */
        break;

    case 1:
        /* code */
        break;

    case 2:
        /* code */
        break;

    case 3:
        /* code */
        break;

    case 4:
        /* code */
        break;

    case 5:
        /* code */
        break;

    case 10:
        /* code */
        break;

    case 20:
        /* code */
        break;

    case 30:
        /* code */
        break;
    
    default:
        printf("\nopção invalida, tente novamente\n");
        main();
        break;
    }
}
