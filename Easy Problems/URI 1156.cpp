
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double i , j=1, c , S = 0 ;
    for ( i =1; i<=39 ; i +=2)
    {
        c = i/j ;
        S += c ;
        j *=2 ;
    }
    printf("%.2lf\n", S) ;

    return 0;
}






