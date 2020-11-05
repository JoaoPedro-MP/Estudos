//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
     
    int N, verificador;
    //entradas
    printf("qual é o numero?: ");
    scanf("%d", &N);
    
    //tratamento
    verificador=N%2;

    //Saidas
    if(verificador==0)
    {
        printf("é par");
    }else
    {
        printf("é impar");
    }
    
    
       
}