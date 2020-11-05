//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    float reais, dolar, cotacao;
    //entradas
    printf("Quantos Reais você tem?: ");
    scanf("%f", &reais);
    printf("quanto o dolar está sendo cotado hoje?: ");
    scanf("%f", &cotacao);


    //tratamento
    dolar=(reais/cotacao)-(reais*0,01);

    //Saidas
    printf("você pode comprar %.2f dolares hoje", dolar);
       
}