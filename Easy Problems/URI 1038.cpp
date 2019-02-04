#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    int x ;
    float y ;
    cin >> x >> y ;

    if (x == 1 )
    {
        printf("Total: R$ %.2f\n" , 4*y) ;
    }
    else if (x == 2 )
    {
        printf("Total: R$ %.2f\n" , 4.50*y) ;
    }
    else if (x == 3 )
    {
        printf("Total: R$ %.2f\n" , 5*y) ;
    }
    else if ( x == 4)
    {
        printf("Total: R$ %.2f\n" , 2*y) ;
    }
    else if ( x == 5)
    {
        printf("Total: R$ %.2f\n" , 1.50*y) ;
    }



    return 0;
}





