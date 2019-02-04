#include <cstdio>
#include <iostream>

using namespace std ;
int main ()
{
    double r , result = 0;

    cin >> r ;
    result = (4.0/3)  * 3.14159 * r * r * r ;
    printf("VOLUME = %.3f\n" ,result ) ;

    return 0;
}
