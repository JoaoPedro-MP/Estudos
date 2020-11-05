#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont=0;
    while(cont<=10)
    {
        printf("%d\n", cont);
        cont=cont+1;
    }
    printf("terminei de contar\n");

    cont=10;
    while(cont>=0)
    {
        printf("%d\n", cont);
        cont=cont-1;
    }
    printf("terminei de contar");
    
}