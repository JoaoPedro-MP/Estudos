//Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variaveis
    float peso=0.0, altura=0.0, IMC=0.0;
    //entradas
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("digite sua altura: ");
    scanf("%f", &altura);
    
    //tratamento
    IMC=peso/(pow(altura,2));
    

    //Saidas
     printf("seu IMC é de %.2f\n",IMC);
    if((IMC>=18.5) && (IMC<=25))
    {
        printf("você está no seu peso ideal");
    }
        else if(IMC<18.5)
        {
            printf("você está abaixo do peso, coma um pouco mais mas apenas coisa saudaveis");
        }else
        {
            printf("Gordo vai correr, bora bora, vai");
        }    
   
    
       
}