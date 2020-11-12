/*
Feito por: João Pedro Marin Pinaffi
Data: 10/11/2020
*/

//Bibliotecas
#include<stdio.h>

//contante
#define  tamY 3
#define  tamX 3


//Declaração de funções
int preencheMatriz(int matrizPrincipal[][tamX]);
int mostraMatriz(int matrizPrincipal[][tamX]);
int montarMatriz(int matrizPrincipal[][tamX]);

int main()
{
    //Matriz
    int matrizPrincipal[tamY][tamX];

    //Code
    printf("preencha uma Matriz [%d]X[%d], Vamos começar.", tamY, tamX);
    preencheMatriz(matrizPrincipal);
    mostraMatriz(matrizPrincipal);
    montarMatriz(matrizPrincipal);
    
}

//funções
int preencheMatriz(int matrizPrincipal[][tamX])
{
    int i=0, i2=0;

    for(i=0;i<tamY;i++)
    {
        for(i2=0;i2<tamX;i2++)
        {
            printf("\nDigite o numero que vai na posição [%d]X[%d]: ", i+1, i2+1);
            scanf("%d", &matrizPrincipal[i2][i]);
        }    
    }
    return 0;
}

int mostraMatriz(int matrizPrincipal[][tamX])
{
    int i=0, i2=0;

    for(i=0;i<tamY;i++)
    {
        for(i2=0;i2<tamX;i2++)
        {
            printf("\no numero da posição [%d]X[%d] é: %d", i+1, i2+1, matrizPrincipal[i2][i]);
        }    
    }
    return 0;   
}

int montarMatriz(int matrizPrincipal[][tamX]){
int i=0, i2=0;

    for(i=0;i<tamY;i++)
    {   
        printf("\n");
        for(i2=0;i2<tamX;i2++)
        {
            printf("%d ",matrizPrincipal[i2][i]);
        }    
    }
    return 0;
}