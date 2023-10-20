#include <stdio.h>
#include <math.h>


int func(double x, double y)
{
    double e = exp(x);

    if ((x * y) <= -1)
    {
        if (e >= x)
        {
            //printf("x = %lf x", "y = %lf y", "f(x,y)=", "%lf e", "\n");
            printf("x = ");
            printf("%lf", x);
            printf(" y = ");
            printf("%lf", y);
            printf(" f(x, y) = ");
            printf("%lf\n", e);
        }
        if (e < x)
        {
            //printf("x = %lf x", "y = %lf y", "f(x,y)=", "%lf x", "\n");
            printf("x = ");
            printf("%lf", x);
            printf(" y = ");
            printf("%lf", y);
            printf(" f(x, y) = ");
            printf("%lf\n", x);
        }
    }
    if ((x * y > -1) && (x * y < 2))
    {
    //printf("x = %lf x", "y = %lf y", "f(x,y)=", 0, "\n");
    printf("x = ");
    printf("%lf", x);
    printf(" y = ");
    printf("%lf", y);
    printf(" f(x, y) = ");
    printf("%lf\n", 0);
    }
    if ((x * y) >= 2)
    {
        if (pow(x, 2) >= cos(x))
        {
            //printf("x = %lf x", "y =%lf y", "f(x,y)=", cos(x), "\n");
            printf("x = ");
            printf("%lf", x);
            printf(" y = ");
            printf("%lf", y);
            printf(" f(x, y) = ");
            printf("%lf\n", cos(x));
        }
        if (pow(x, 2) < cos(x))
        {
            //printf("x = %lf x", "y = %lf y", "f(x,y)=", pow(x, 2), "\n");
            printf("x = ");
            printf("%lf", x);
            printf(" y = ");
            printf("%lf", y);
            printf(" f(x, y) = ");
            printf("%lf\n", pow(x, 2));
        }
    }
    return 0;
}

int main()
{
    double hx = 0.4, xn = 0.0, xk = 1.0;
    double hy = 0.3, yn = 1.0, yk = 2.0;
    double first = func(hx, hy);
    double second = func(hx, yn);
    double third = func(hx, yk);

    double fourth = func(xn, hy);
    double fiveth = func(xn, yn);
    double six = func(xn, yk);

    double seventh = func(xk, hy);
    double eighth = func(xk, yn);
    double nineth = func(xk, yk);

    return 0;
}