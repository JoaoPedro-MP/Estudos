/*Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5,
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float C=0.0, F=0.0;
    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f", &C);
    
    F=(9*C+160)/5;

    printf("A temperatura em fahrenheit é: %2.f", F);
}