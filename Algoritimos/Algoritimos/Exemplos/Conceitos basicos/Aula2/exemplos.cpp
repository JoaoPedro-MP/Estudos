//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    int a;
    float b;
   //entradas
   
   a=20;
   b= pow(9,5);

   //tratamento
   if(a<0)
   {
     a=a*-1;          
   }

   //Saidas
   printf("absoluto %d\n", a);
   printf("Potencia %f", b);
       
}