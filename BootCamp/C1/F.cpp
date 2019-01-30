#include <cstdio>
#include <iostream>
#define exp 2.718281828

using namespace std ;

int main ()
{
    char c ;
    int n, e,h , T = 0.00 , D = 0.00 , H = 0.00 ;


    while (cin >> c && cin >> n)
    {
        if (c == 'T')
            T = n  ;
        else if (c == 'D')
            D= n ;
        else if (c == 'H')
            H = n ;
        else if (c == 'E')
            return 0 ;
    }


    cout << T << " " << D << " "<< H ;

    if ( H == 0.00)
    {
        e = 6.11 * exp * (5417.7530*((1/273.16)-(1/(D+273.16))));
        h = 0.5555 * (e - 10.0);

        H = T+h ;
    }
    cout << H ;

    return 0 ;
}
