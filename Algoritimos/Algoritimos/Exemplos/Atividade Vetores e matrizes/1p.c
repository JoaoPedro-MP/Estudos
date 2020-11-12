/*
Feito por: João Pedro Marin Pinaffi
Data: 11/11/2020
*/
/*
01 Crie um programa em C que peça 10 números, armazene eles 
em um vetor e diga qual elemento é o maior, e seu valor.

02. Crie um programa em C que peça 10 números, 
armazene eles em um vetor e diga qual elemento é o menor, e seu valor.

03. Crie um programa em C que peça 10 números, armazene eles em um vetor
e diga qual elemento é o maior, qual é o menor e que seus valores.
*/

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// const
#define tamV 10

//declaração de função
void showQuest();
int preencherV(int v[]);
int mostrarV(int v[]);
int mostrarMaior(int v[]); 
int mostrarMenor(int v[]); 

int main()
{
    //vetor
    int v[tamV];

    //variaveis
    int escolha;

    printf("Exercicios de matrizes e vetores");
    printf("\nMostrar Exercicios = 0");
    printf("\nIr para o exercicio 1");
    printf("\nIr para o exercicio 2");
    printf("\nIr para o exercicio 3");
    printf("\nIr para o exercicio 4");
    printf("\nIr para o exercicio 5");
    printf("\nIr para o exercicio 6");
    printf("\nDesafio 01");
    printf("\nDesafio 02");
    printf("\nSair = 30");
    printf("\nescolha o qual você quer executar, digitando o numero do exercicio ou desafio : ");
    scanf("%d", &escolha);
    
    
    
    switch (escolha)
    {
    case 0:
        showQuest();
        break;

    case 1:
        preencherV(v);
        mostrarMaior(v);
        break;

    case 2:
        preencherV(v);
        mostrarMenor(v);
        break;

    case 3:
        preencherV(v);
        mostrarMaior(v);
        mostrarMenor(v);
        break;

    case 4:
        /* code */
        break;

    case 5:
        /* code */
        break;

    case 6:
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

int preencherV(int v[])
{
    int i=0;
    for(i=0;i<tamV;i++)
    {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &v[i]);
    }
    return 0;
}
int mostrarV(int v[])
{
    return 0;
}
int mostrarMaior(int v[])
{
    int i=0, max=0, indiceDoMax=0;
    max=v[i];
    for(i=0;i<tamV;i++)
    {

        if(v[i]>max)
        {
            max=v[i];
            indiceDoMax=i;
        }
    }
    printf("\nO maior numero do vetor é %d e foi encontrado no indice %d do vetor", max, indiceDoMax);
    return 0;
}

int mostrarMenor(int v[])
{
    int i=0, mini=0, indiceDoMini=0;
    mini=v[i];
    for(i=0;i<tamV;i++)
    {

        if(v[i]<mini)
        {
            mini=v[i];
            indiceDoMini=i;
        }
    }
    printf("\nO menor numero do vetor é %d e foi encontrado no indice %d do vetor", mini, indiceDoMini);
    return 0;
}

void showQuest()
{
    printf("\n01 Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, e seu valor.");

    printf("\n02. Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o menor, e seu valor.");

    printf("\n03. Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, qual é o menor e que seus valores");
}