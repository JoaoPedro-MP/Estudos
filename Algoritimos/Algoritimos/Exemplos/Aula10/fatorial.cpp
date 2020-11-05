#include <stdio.h>
#include <stdlib.h>



int main()
{
    int cont=0, n=0, fatorial=0, resp=0;
    printf("Digite o numero que quer fatorar: ");
    scanf("%d", &n);
    cont=n;
    

    do
    {
        fatorial=cont*cont-1;
        resp=resp + fatorial;
        printf("%d,", cont);
        printf("%d,", fatorial);
        cont--;    
        
    } while (cont>1);

    printf("fatorial de %d é %d", n, resp);
  

    
    
}