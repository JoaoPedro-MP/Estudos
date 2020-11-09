/*
Feito Por: João Pedro Marin
data 08/11/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int buscaVetor(int tam, int valor)
{
    int vetor[tam], i;

    srand( (unsigned)time(NULL));

    for(i=1; i<tam; i++)
    {
    vetor[i]=(1+(rand()%10));


        if(vetor[i]==valor)
        {
            printf("\no indice %d contem o numero %d", i, valor);
        }else
        {
            
        }
    }
}
int main()
{
    int tam, valor;
    printf("digite o tamanho do seu vetor: ");
    scanf("%d", &tam);

    printf("digite o numero que você quer achar de 1 a 10: ");
    scanf("%d", &valor);

    buscaVetor(tam, valor);

}