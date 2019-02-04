#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    string name ;
    double a , b , TOTAL;

    cin >> name ;
    cin >> a >> b ;

    TOTAL = a + b* 0.15;

    printf("TOTAL = R$ %.2f", TOTAL);
    cout << endl ;
    return 0;
}

