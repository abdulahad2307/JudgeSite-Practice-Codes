#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    int n , x , y , z , a,b,c,r100 , r50 , r20 , r10 , r5 , r2 , r1;

    cin >> n ;
    cout << n << endl ;

    r100 = n / 100;
    cout << r100 << " nota(s) de R$ 100,00"<< endl;

    x = n % 100;
    r50 = x/50 ;
    cout << r50 <<" nota(s) de R$ 50,00"<< endl ;

    y = x % 50;
    r20 = y/20 ;
    cout << r20 << " nota(s) de R$ 20,00"<<endl ;

    z = y % 20;
    r10 = z/10 ;
    cout << r10 << " nota(s) de R$ 10,00" << endl ;

    a = z % 10;
    r5 = a/5 ;
    cout << r5 << " nota(s) de R$ 5,00" << endl ;

    b = a % 5;
    r2 = b/2 ;
    cout << r2 << " nota(s) de R$ 2,00"<<endl ;

    c = b % 2;
    r1 = c/1 ;
    cout << r1 << " nota(s) de R$ 1,00" << endl ;



    return 0;
}



