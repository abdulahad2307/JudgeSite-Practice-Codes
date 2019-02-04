#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double x ,sum =0 , c = 0 ,avg ;
    while(1)
    {
        scanf("%lf" , &x);

        if (x < 0)
            break;

        sum = sum + x ;
        c++;
    }

    avg = sum /(c*1.00);

    printf("%.2lf\n" , avg) ;


    return 0;
}





