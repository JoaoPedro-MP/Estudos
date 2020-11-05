//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    int anoAtual=0, anoDeNAscimento=0, idade=0;
    char nome[20];

    //entradas
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Digite o ano em que você nasceu: ");
    scanf("%d", &anoDeNAscimento);

    idade=anoAtual-anoDeNAscimento;
   
    //Saidas
    printf("Seu nome é: %s\nSua idade é: %d", nome, idade);
    if(idade>=18){
        printf("\nvocê já pode beber\n");    
    }else if(idade>=0){
        printf("\nvocê ainda não pode beber\n");
    }else{
        printf("\nvc não nasceu");
    }
}