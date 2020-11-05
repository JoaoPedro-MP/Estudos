/*2. Faça um algoritmo que:
a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
b) Obtenha o valor para a variável VH (valor hora trabalhada):
c) Obtenha o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto => SB = HT * VH;
e) Calcule o total de desconto => TD = (PD/100)*SB;
f) Calcule o salário líquido => SL = SB – TD;
g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário
Líquido*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float HT=0.0, VH=0.0, PD=0.0, SB=0.0, TD=0.0, SL=0.0;
    printf("Insira o numero de horas trabalhadas no mês: ");
    scanf("%f", &HT);
    printf("insira que você recebe por hora: ");
    scanf("%f", &VH);
    printf("insira o percentual de desconto que você recebe: ");
    scanf("%f", &PD);

    SB=HT*VH;
    TD=(PD/100)*SB;
    SL=SB-TD;

    printf("\nO valor de suas horas trabalhadas é: %0.f\nO seu salário bruto é: %2.f\nO desconto do seu salário é: %2.f\nO seu salário final é: %2.f", HT,SB,TD,SL);
}