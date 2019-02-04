#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i,n ;
    double a , b, c ,  av ;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf" , &a , &b , &c);

        av = (2*a + 3*b +  5*c)/(2+3+5) ;

        printf("%.1lf\n" , av);
    }

    return 0;
}




