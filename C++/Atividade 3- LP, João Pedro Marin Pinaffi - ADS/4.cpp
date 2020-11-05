/*4. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma
viagem, utilizando um automóvel que faz 12Km por litro. Para obter o cálculo, o
usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela.
Desta forma, será possível obter a distância percorrida com a fórmula:
distancia = tempo *velocidade. Tendo o valor da distância, basta calcular a
quantidade de litros de combustível utilizada na viagem com a fórmula:
litros_usados = distancia / 12. O programa deve apresentar os valores da
velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade
de litros utilizada na viagem.*/
#include <math.h>
#include <stdio.h>

#include <stdlib.h>
int main()
{
    float tempoDeViagem, velocidadeMedia, distancia, litrosUsados;
    printf("Digite o Tempo de viagem: ");
    scanf("%f", &tempoDeViagem);
    printf("digite sua velocidade média: ");
    scanf("%f", &velocidadeMedia);

    distancia = tempoDeViagem * velocidadeMedia;
    litrosUsados = distancia/12;

    printf("Velocidade média: %2.f", velocidadeMedia);
    printf("\nTempo gasto na viagem: %2.f", tempoDeViagem);
    printf("\nDistancia percorrida: %2.f", distancia);
    printf("\nQuantidade de litros utilizada: %2.f", litrosUsados);
    

    
}