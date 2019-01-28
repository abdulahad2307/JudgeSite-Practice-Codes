#include <bits/stdc++.h>

using namespace std ;

bool isPrime(long long int n )
{
    if (n == 1)
        return false ;

    for (int i = 2 ; i*i <= n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true ;
}




int main()
{
    long long int n ;
    int m = 0;
    scanf("%lld", &n);

    while (n!=0)
    {
        for (int i = 2 ; i<= n/2 ; i++)
        {
           if (i == n)
           {
               printf("-1\n");
               break;
           }
           else if (n%i == 0)
            m= i;
           else
            m = m ;
        }
        printf("%d\n", m);
    }




    return 0;
}

