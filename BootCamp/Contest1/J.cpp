#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;

bool isPrime(int n)
{
    if (n==1)
        return false;

    for (int i = 2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
            return false;
    }
    return true ;
}
int main()
{
    int n , m , x ;

    scanf("%d %d" , &n , &m);

    if(isPrime(n)==true)
    {
        for (int i = n+1 ; i<= 50 ; i++)
        {
            if(isPrime(i)==true)
            {
                x = i;
                break;
            }
        }

        if(x==m)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}



