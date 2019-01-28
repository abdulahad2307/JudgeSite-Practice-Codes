#include <iostream>
#include <stdio.h>
#include<algorithm>


using namespace std;

int lcm (int a , int b)
{
    int m , r ;

    m = (a)/__gcd(a,b);
    r = m * b ;

    return r ;
}

int main()
{

    int t , a,b, L, m;
    scanf("%d" , &t);

    for (int i = 0 ; i < t ; i++)
    {
        scanf("%d %d %d" , &a , &b , &L);
        m = lcm(a,b);

        if (m > L)
        {
            printf("impossible\n");
            break;
        }
        for (int j = 0 ; j <= L ; j++)
        {

            if (lcm(m,j)== L)
            {
               printf("%d\n" , j);
               break;
            }

        }
    }

    return 0;
}






