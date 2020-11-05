/*4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13.*/

//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    int n1=0, n2=0, total=0 ;
   //entradas
   printf("Digite o primeiro numero: ");
   scanf("%d", &n1);
   printf("Digite o segundo numero: ");
   scanf("%d", &n2);

   //tratamento
   total=n1+n2;

   //Saidas
   printf("A soma dos numero é igual a: %d", total);
   
       
}