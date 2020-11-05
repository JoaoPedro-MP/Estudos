/*5) Faça
na tela
Ex:
Nota 1:
Nota 2:
A média
um programa que leia as duas notas de um aluno em uma matéria e mostre
a sua média na disciplina.
4.5
8.5
entre 4.5 e 8.5 é igual a 6.5*/
//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    float n1=0.0, n2=0.0, media=0.0;
   //entradas
   printf("Digite o primeiro numero: ");
   scanf("%f", &n1);
   printf("Digite o segundo numero: ");
   scanf("%f", &n2);

   //tratamento
   media=(n1+n2)/2;

   //Saidas
   printf("Nota 1: %f", n1);
   printf("\nNota 2: %f", n2);
   printf("\nA media dos numero é igual a: %f", media);
   
       
}