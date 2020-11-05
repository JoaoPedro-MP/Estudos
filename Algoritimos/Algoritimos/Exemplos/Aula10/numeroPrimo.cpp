#include<stdlib.h>
#include<stdio.h>

int main()
{
    int contdiv=0,cont=1, n=0;
    
    printf("Digite o numero: ");
    scanf("%d", &n);
    do
    {
        printf("%d", cont);
        if(n%cont==0)
        {
            contdiv=contdiv+1;
        }
        cont=cont+1;
    }while (cont>n);
    if(contdiv>=2)
    {
        printf("é primo");    
    }else
    {
        printf("não é primo");    
    }
    

}

