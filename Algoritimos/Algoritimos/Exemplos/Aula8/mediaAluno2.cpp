//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    float n1,n2,n3,n4,media;
    //entradas
    printf("digite a nota do primeiro semestre: ");
    scanf("%f", &n1);

    printf("digite a nota do segundo semestre: ");
    scanf("%f", &n2);

    printf("digite a nota do terceiro semestre: ");
    scanf("%f", &n3);

    printf("digite a nota do quarto semestre: ");
    scanf("%f", &n4);

    //tratamento
    media=(n1+n2+n3+n4)/4;

    //Saidas
    printf("sua média é: %.2f\nStatus: ", media);
    if(media>=7.0)
    {
        printf("Passou, parabéns");
    }
        else if((media>4.5) && (media<7.0))
        {
            printf("Recuperação, vamos que você ainda tem chance");
        }
        else
        {
            printf("Se fudeu, repense suas atitudes na proxima");
        }
        
   
    
       
}