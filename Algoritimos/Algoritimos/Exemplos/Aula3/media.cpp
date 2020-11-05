//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    int n1=0, n2=0 ;
    float media=0.0;
   //entradas
   printf("Digite o primeiro numero: ");
   scanf("%d", &n1);
   printf("Digite o segundo numero: ");
   scanf("%d", &n2);

   //tratamento
   media=(n1+n2)/2;

   //Saidas
   printf("A media dos numero é igual a: %f", media);
   
       
}