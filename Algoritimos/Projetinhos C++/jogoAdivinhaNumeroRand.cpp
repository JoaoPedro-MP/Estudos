/*Feito Por: João Pedro Marin Pinaffi
  Data 07/11/20
  OBS: Variavel global utilizada para realizar a contagem de tentativas      
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int verificar(int a);
int tentativas=0;

int main()
{
    int Randomico=0;

    srand( (unsigned)time(NULL));
    Randomico=1+(rand()%1000);

    printf("-----------------------------------\n");
    printf("         Jogo do aleatorio         \n");
    printf("-----------------------------------\n");
    printf("O sistema irá sortear um numero de 1 a 1000\nO jogador terá que acertar esse numero seguindo as dicas do sistema");
    printf("\nBoa sorte\n");
    printf("-----------------------------------\n");
    
    verificar(Randomico);
}

int verificar(int Randomico)
{
    int numeroUser=0;

    printf("\n\nDigite o numero:");
    scanf("%d", &numeroUser);
    if(Randomico==numeroUser)
    {
        tentativas++;
        printf("parabéns você Acertou o numero gerado era: %d", Randomico);
        printf("\nVocê tentou %d vezes antes de acertar", tentativas);

    }else if (Randomico<numeroUser)
    {
        tentativas++;
        printf("Numero incorreto.\nTente mais uma vez mas lembre que seu numero é MENOR que o que você digitou");
        verificar(Randomico);
    }else
    {
        tentativas++;
        printf("Numero incorreto.\nTente mais uma vez mas lembre que seu numero é MAIOR que o que você digitou");
        verificar(Randomico);
    }
}