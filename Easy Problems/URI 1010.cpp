#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    string name ;
    double p1, p2, a , b , c, d,  TOTAL;

    cin >> p1 >> a >> b ;
    cin >> p2 >> c >> d ;

    TOTAL = a *b + c*d ;

    printf("VALOR A PAGAR: R$ %.2f", TOTAL);
    cout << endl ;
    return 0;
}


