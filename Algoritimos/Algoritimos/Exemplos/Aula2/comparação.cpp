//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    int a=0,b=0,c=0;

   //entradas
   a=2;
   b=3;
   c=5; 
    
   //tratamento
   printf("a é maior que b? : ");
   if(a>b)
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }

   printf("\na é igual a b? : "); 
   if(a==b)
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }

   printf("\na é diferente de b? : "); 
   if(a!=b)
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }

   printf("\na é maior que 2? : "); 
   if(a>2)
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }

   printf("\na maior ou igual a 2? : ");
   if(a>=2)
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }
   
   printf("\nC é igual a+b?: ");
   if(c==a+b)
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }

   printf("\nC é maior igual a^b?: ");
   if(c>=pow(b,a))
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }

   printf("\nC é menor igual a^b?: ");
   if(c<=pow(b,a))
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }

   printf("\nb é menor igual a resto C?: ");
   if(b<=c%2)
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }

   printf("\n1 é igual a resto C?: ");
   if(1==c%2)
   {
      //Saidas 
      printf("true"); 
   }else
   {
       //Saidas
       printf("false");
   }       
}