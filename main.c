#include <stdio.h>
#include "myMath.h"

int main()
{
    printf("Insert a real number\n");
    double x;
    if(scanf("%lf",&x)!=1)
    {
        printf("Invalid input!\n");
        return 0;
    }
    
    printf("f(x)=e^x+x^3-2 for the value: %0.4f is %.4f\n",x, sub(add(Exponent((int)x),Power(x,3)),2));
    printf("f(x)=3x+2x^2 for the value: %0.4f is %.4f\n",x, add(mul(x,3),mul(Power(x,2),2)));
    printf("f(x)=(4x^3)/5-2x for %0.4f is %0.4f\n",x,sub(div(mul(Power(x,3),4),5),mul(x,2)));

    return 0;
}