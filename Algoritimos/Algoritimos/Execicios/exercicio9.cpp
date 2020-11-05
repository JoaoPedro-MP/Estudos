#include<stdlib.h>
#include<stdio.h>

int main()
{
    float bonoros, trumps, cambio;
    
    printf("digite quantos bonoros você tem: ");
    scanf("%f", &bonoros);

    printf("Digite o valor do cambio atual: ");
    scanf("%f", &cambio);

    trumps=bonoros/cambio;

    if(cambio>=4.5)
    {
        printf("após a troca você tera US$%.2f trumps", trumps);
        printf("\ncom essa taxa de cambio vc ta na merda meu irmão");
    }else
    {
         printf("após a troca você tera US$%.2f trumps", trumps);
        printf("\ncom essa taxa de cambio vc deviria comprar até sua mãe em dolar irmão");
    }
    


}