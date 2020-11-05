#include<stdlib.h>
#include<stdio.h>

int main()
{
    float largura, altura, area, lTinta;

    printf("digite a largura da área:  ");
    scanf("%f", &largura);

    printf("Digite a altura da área: ");
    scanf("%f", &altura);

    area=largura*altura;
    lTinta=area/2;


    printf("A área a ser pintada é %.2fm²", area);
    printf("\nVocê vai precisar de %.1f litros de tinta", lTinta);
 
}