#include <stdio.h>
#include <math.h>

int main()
{
    static float f, a, b, h, x;
    static float e = 2.71828;
    printf("print a: ");
    scanf("%f", &a);
    printf("print b: ");
    scanf("%f", &b);
    printf("print h: ");
    scanf("%f", &h);
    x = a;
    while(x<=8)
    {
        f = pow(x*x-1,x-1);
        printf("x=%f f(x)=%f \r", x, f);
        x = x+h;
    }
    while(8<x && x<=9)
    {
        f = 1/( sin(x) + fabs( cos(x) ) );
        printf("x=%f f(x)=%f \r", x, f);
        x = x+h;
    }
    while(9<x && x<=b)
    {
        f = log( pow(e,x) + 4 );
        printf("x=%f f(x)=%f \r", x, f);
        x = x+h;
    }
    return 0;
}













