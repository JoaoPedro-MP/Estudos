//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    float C, F;
    //entradas
    printf("Quantos firehaith está fazendo: ");
    scanf("%f", &F);


    //tratamento
    C=(F-32)/1.8;

    //Saidas
    printf("a temperatura em Celcius é de: %.1f", C);
       
}