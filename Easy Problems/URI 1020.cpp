#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    int n , y , m , d ;

    cin >> n ;

    y = n/365;
    cout << y << " ano(s)" << endl ;
    n = n % 365 ;

    m = n/30 ;
    cout << m << " mes(es)" << endl ;

    d = n%30;
    cout << d << " dia(s)" << endl ;

    return 0 ;

}
