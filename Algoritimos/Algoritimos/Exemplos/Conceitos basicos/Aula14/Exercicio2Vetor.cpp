/*
Feito por: João Pedro Marin Pinaffi
Data: 08/11/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<string>


float mediaAluno(float n1, float n2, float n3);

int main()
{
    char alunos[5][50];
    float n1[5],n2[5],n3[5], media[5];
    int indice;

    for(indice=1; indice<5; indice++)
    {
        printf("escreva o nome do aluno: ");
        scanf("%s", alunos[indice]);
        fflush(stdin);

        printf("Digite a n1: ");
        scanf("%f",&n1[indice]);

        printf("Digite a n2: ");
        scanf("%f",&n2[indice]);

        printf("Digite a n1: ");
        scanf("%f",&n3[indice]);

        media[indice]=mediaAluno(n1[indice], n2[indice], n3[indice]);
    }

    for(indice=1; indice<5; indice++)
    {
        printf("nome do aluno: %s\n", alunos[indice]);
        printf("Nota 1: %0.2f\n", n1[indice]);
        printf("Nota 2: %0.2f\n", n2[indice]);
        printf("Nota 3: %0.2f\n", n3[indice]);
        printf("media: %0.2f\n", media[indice]);
        if(media[indice]>=7.0)
        {
            printf("aprovado\n");
        }else if(media[indice>4.0])
        {
            printf("recuperação\n");
        }else
        {
            printf("reprovado\n");
        }
        
        

    }
}

float mediaAluno(float n1, float n2, float n3)
{
    float media;
    
    media=(n1+n2+n3)/3;

    return media;
}