#include <stdio.h>
#include <string.h>


int main()
{
    int n=0, resp1=0, resp2=0, negativo=0, positivo=0, cont=0;
    char resp[2];

    do
    {
        printf("digite um numero: ");
        scanf("%d", &n);
        if(n<0)
        {
            negativo++;
        }else
        {
            positivo++;
        }
        
        printf("quer continuar s ou n: ");
        scanf("%s", resp);
        resp1= strcmp(resp,"s");
        resp2= strcmp(resp,"S");
        cont++;
    } while ((resp1==0) || (resp2==0));

    printf("Você digitou %d numeros e destes %d são negativos e %d são positivos", cont, negativo, positivo);
    
    
}