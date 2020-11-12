//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    float valorTotal, valorImposto, quantoVaiSerPago;
    //entradas
    printf("qual é o valor do total dos produtos comprados?: ");
    scanf("%f", &valorTotal);
    printf("qual a porcentagem da taxa?: ");
    scanf("%f", &valorImposto);


    //tratamento
    quantoVaiSerPago=(valorTotal*valorImposto)/100;

    //Saidas
    printf("você vai pagar %.2f dolares de imposto", quantoVaiSerPago);
       
}