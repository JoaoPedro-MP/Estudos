#include <stdlib.h>
#include <stdio.h>

int main() 
{
    float N, dobro, terceira;

    printf("digite o numero: ");
    scanf("%f", &N);

    dobro=N*2;
    terceira=N/3;

    printf("O dobro de %.3f é %.3f\n", N, dobro);
    printf("A terça parte de %.3f é %.3f", N, terceira);
}