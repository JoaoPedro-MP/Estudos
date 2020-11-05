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
    if(IMC<17)
    {
        printf("muito Abaixo do peso");
    }
        else if ((IMC>=17) && (IMC<18.5))
        {
            printf("Abaixo do peso");
        }
            else if ((IMC>=15.5) && (IMC < 25))
            {
                printf("Peso ideal");
            }
                else if ((IMC>=25) && (IMC<30))
                {
                    printf("sobrepeso");
                }
                    else if ((IMC >= 30) && (IMC<35))
                    {
                         printf("obesidade");
                    }
                        else if ((IMC>=35) && (IMC<40))
                        {
                             printf("Obesidade severa");
                        }
                        else
                        {
                             printf("Obesidade morbida");
                        }
                        
                        
                    
                
            
        
    
       
}