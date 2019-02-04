#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    int n , h ;
    float s ;
    double total;

    cin >> n >> h ;
    cin >> s ;

    total = s * h ;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, total);

    return 0;
}
