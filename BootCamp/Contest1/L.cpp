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
    int n , p2  ;


    while (1)
    {

        int pr = 0;
        scanf("%d", &n);

        if (n==0)
            break;

        for(int p1 = 2 ; p1<=n/2 ; p1++)
    {
        if(isPrime(p1)==true)
        {
            p2 = n - p1 ;


            if(isPrime(p2)==true)
                pr++;
        }
    }
     cout << pr << endl ;
    }


    return 0;
}




