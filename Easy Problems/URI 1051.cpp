#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double n , tax ;

    scanf("%lf", &n) ;

    if (n <= 2000)
        printf("Isento\n");
    else if (n > 2000 && n <= 3000)
        printf("R$ %.2lf\n" , (n-2000)*.08 );
    else if ( n > 3000 && n <= 4500)
        printf("R$ %.2lf\n" , 1000*.08 + (n-3000)*.18);
    else if (n > 4500)
        printf("R$ %.2lf\n" , 1000*.08 + 1500*.18 + (n-4500) * .28 );



    return 0 ;
}

