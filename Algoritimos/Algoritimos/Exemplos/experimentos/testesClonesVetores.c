
/*
Feito Por: João Pedro Marin Pinaffi
Dia 09/11/2020
*/
/*
Enunciado
Crie um programa que peça para o usuário 5 números, faça uma cópia desse idêntica desse vetor, outra cópia mas com os valores dobrados dos elementos. 
Por fim, mostre todos os 3 vetores: original, copiado e dobrado. Use funções.
*/
//bibliotecas
#include <stdio.h>

//constantes
const int tamVetor = 3;

//declaração de função
int copiaVetor(int vetorprime[], int vetorCopia[]);
int dobraVetor(int vetorprime[], int vetorX2[]);

int main()
{
    //Vetor
    int vetorPrime[tamVetor];
    int vetorCopia[tamVetor];
    int vetorX2[tamVetor];

    //Variaveis
    int i=0;

    //code
    printf("Vamos inserir os valores em um vetor de tamanho %d bora começar\n", tamVetor);
    
    for(i=0; i<tamVetor; i++ )
    {
        printf("Digite o %d° numero: ", i+1);
        scanf("%d", &vetorPrime[i]);
    }

    for(i=0; i<tamVetor; i++ )
    {
        printf("\nposição numero %d = %d ", i+1, vetorPrime[i]);
        
    }
    copiaVetor(vetorPrime, vetorCopia);

    dobraVetor(vetorPrime, vetorX2);

return 0;

}


int copiaVetor(int vetorprime[], int vetorCopia[])
{
    int i;
 
    for(i=0 ; i < tamVetor ; i++)
        vetorCopia[i] = vetorprime[i];


    for(i=0; i<tamVetor; i++ )
    {
        printf("\nposição numero %d = %d  rolinha", i+1, vetorCopia[i]);
        
    }
    return 0;
}

int dobraVetor(int vetorprime[], int vetorX2[])
{
    int i;
 
    for(i=0 ; i < tamVetor ; i++)
        vetorX2[i] = 2 * vetorprime[i];


    for(i=0; i<tamVetor; i++ )
    {
        printf("\nposição numero %d = %d  rolinha", i+1, vetorX2[i]);
        
    }
    return 0;
}