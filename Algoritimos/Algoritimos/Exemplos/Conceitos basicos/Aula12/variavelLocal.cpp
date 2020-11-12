#include <stdio.h>
 
void teste(int a)
{
    a++;
    printf("Estou dentro da função! A variavel foi alterada, e aqui dentro vale: a = %d\n\n",a);
}
 
int main(void)
{
    int num1 = 1;
 
    printf("Valor inicial de 'num1': %d\n\n", num1);
    teste(num1);
    printf("Valor de 'num1' apos ir pra função: %d\n", num1);
}