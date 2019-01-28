#include <iostream>
#include <stdio.h>
#include<algorithm>


using namespace std;
int main()
{
    int t ;
    long long r , x1 , x2 , y1 ,y2 , latx , laty;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i ++)
    {
        scanf("%lld %lld %lld %lld" , &x1 , &y1 , &x2 , &y2);

        latx = abs(x2 - x1);
        laty = abs(y2 - y1);

        if (latx == 0)
            printf("Case %d: %lld\n",i+1,laty+1);
        else if (laty == 0)
            printf("Case %d: %lld\n",i+1,latx+1);
        else
        {
            r = __gcd(latx,laty);
            printf("Case %d: %lld\n",i+1,r+1);
        }



    }

    return 0;
}


