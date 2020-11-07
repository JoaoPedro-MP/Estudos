/* 2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas-
vindas para ela:
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer! */

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    char nome[20];

    //entradas
    printf("Digite seu nome: ");
    scanf("%s", nome);
       
    //Saidas
    printf("Bem vindo: %s", nome);
       
}