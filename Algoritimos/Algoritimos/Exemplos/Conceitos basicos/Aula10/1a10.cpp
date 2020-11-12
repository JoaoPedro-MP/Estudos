
#include <stdio.h>

int main()
{
    int cont=0,x=0,resul=0;

    printf("qual numero você quer a tabuada: ");
    scanf("%d", &x);
    do
    {
        cont++;
        resul=x*cont;
        printf("%dx%d=%d\n", x,cont,resul);

    }while (cont<10);

    

}