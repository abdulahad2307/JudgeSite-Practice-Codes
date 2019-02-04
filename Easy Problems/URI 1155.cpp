#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double c , S = 0 ;
    for (double i  = 1 ; i <= 100 ; i++)
    {
        c = 1/i ;
        S += c ;
    }
    printf("%.2lf\n", S) ;




    return 0;
}






