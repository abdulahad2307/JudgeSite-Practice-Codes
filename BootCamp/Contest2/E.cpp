#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n)
{
    if(n==1)
        return false;

    for(int i=2 ; i*i <= n ; i++ )
    {
        if(n%i == 0)
            return false;
    }
    return true ;
}

long long int reverseInt(long long int n)
{
     long long int temp=0, rev=0;

     while(n!=0)
     {
         temp=n%10;
         rev=(rev*10)+temp;
         n=n/10;
     }

     return rev;
}

int main()
{
    long long int n ;

    while (scanf("%lld", &n)!=EOF)
    {
        if(isPrime(n)== true)
        {
            if(reverseInt(n)!=n && isPrime(reverseInt(n)==true))
                printf("%d is emirp.\n",n);
            else
                printf("%d is prime.\n",n);

        }
        else
            printf("%d is not prime.\n",n);
    }

    return 0 ;
}


