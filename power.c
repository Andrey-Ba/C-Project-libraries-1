#include "myMath.h"
#define e 2.718281

double Power(double x, int y)
{
    double sum = 1;
    for(int i=0;i<y;i++)
     sum*=x;
    return sum;
}

double Exponent(int x)
{
    return Power(e,x);
}
