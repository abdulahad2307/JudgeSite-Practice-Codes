#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
    double input [12] , SUM = 0.00;

    for (int i = 0 ; i< 12 ;  i++)
    {
        cin >> input[i];
        SUM = SUM + input[i];
    }

    double output = SUM / 12 ;

    printf("$%.2f\n" , output);

    return 0 ;
}
