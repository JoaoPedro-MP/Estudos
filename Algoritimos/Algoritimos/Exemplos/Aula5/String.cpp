#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{   char nome[20]="C progressivo";
    int cont;

    for (cont=0; cont<20; cont++)
    {
        printf("%c", nome[cont]);
    }
    for(cont=0; nome[cont] != '\0'; cont++)
    {

    }
     printf("\n o '\\0' está na posição %d da string\n", cont);

    
       
}