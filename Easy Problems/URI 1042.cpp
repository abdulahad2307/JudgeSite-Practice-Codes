#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double a , b , c , m1 , m2 , m3;

    scanf("%lf %lf %lf" , &a , &b , &c );

    if (a < b && a < c )
    {
        m1 = a;

        if(b< c)
        {
            m2 = b;
            m3 = c ;
        }
        else
        {
            m2 = c ;
            m3 = b ;
        }
    }
    else if (b < a && b < c)
    {
        m1 = b ;

        if (a < c)
        {
            m2 =a ;
            m3 = c ;
        }
        else
        {
            m2 =c ;
            m3 = a ;
        }
    }
    else
    {
        m1 = c ;

        if (a < b )
        {
            m2 = a ;
            m3 = b ;
        }
        else
        {
            m2 = b ;
            m3 = a ;
        }
    }

    cout << m1 << endl << m2 << endl << m3 << endl ;
    cout << endl <<  a <<endl << b << endl << c << endl ;


    return 0 ;
}

