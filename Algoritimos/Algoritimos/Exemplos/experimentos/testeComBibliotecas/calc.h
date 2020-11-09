#include<stdio.h>



float add(float a, float b)
{
    return(a+b);
}

float sub(float a, float b)
{
    return(a-b);
}

float div(float a, float b)
{
    return(a/b);
}

float mult(float a, float b)
{
    return(a*b);
}

int ImparPar(int a)
{
    if((a%2)==0)
    {
        printf("é par");
    }else
    {
        printf("é impar");
    }
    return 0;   
}