/*3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.*/

//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    char funcionario[30];
    float salario;
   //entradas
    printf("Digite seu nome: ");
    scanf("%s", funcionario);
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("O funcionário %s tem um salário de R$%f em Junho", funcionario, salario);
    

   //tratamento
   
        
}