#include "calc.h"
#include <stdio.h>


int main()
{
    float n1=5, n2=8;
    
    printf("%0.2f\n",add(n1,n2));

    printf("%0.2f\n",sub(n1,n2));

    printf("%0.2f\n",div(n1,n2));

    printf("%0.2f\n",mult(n1,n2));

    ImparPar(2);
}