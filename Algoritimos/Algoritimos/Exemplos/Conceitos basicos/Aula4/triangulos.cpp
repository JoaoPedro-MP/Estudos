//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    float l1, l2, l3;
   //entradas
    printf("digite o primeiro lado: ");
    scanf("%f", &l1);
    printf("digite o segundo lado: ");
    scanf("%f", &l2);
    printf("digite o terceiro lado: ");
    scanf("%f", &l3);

   //tratamento
   if((l1<l2+l3) && (l2<l1+l3) && (l3<l1+l2)){
        if((l1==l2) && (l2==l3))
        {
            printf("o triangulo é equilatero!!");
        }else if ((l1!=l2) && (l2!=l3) && (l1!=l3))
        {
            printf("o triangulo é escaleno");
        }else{
            printf("triangulo esociles");
        }
   }else
   {
       printf("não é um triangulo");
   } 
      
}