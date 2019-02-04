#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double a , b , c , p , area;

    scanf("%lf %lf %lf" , &a , &b , &c );

    if (a < (b+c) && b < (a+c) && c < (a+b))
    {
        p = a + b + c ;

        printf("Perimetro = %.1f\n" , p);
    }
    else
    {
        area = ((a+b)*c) / 2 ;
        printf("Area = %.1f\n" , area) ;
    }

    return 0 ;
}
