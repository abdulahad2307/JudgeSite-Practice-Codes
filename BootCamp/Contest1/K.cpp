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
    int x , a ;



    while (1)
    {
        scanf("%d" , &x);

        if(x==0)
            break;


        for (int i = 2 ; i <= x ; i++)
        {
            if(isPrime(i)==true)
                a= x - i ;

            if(isPrime(a)==true)
            {
                printf("%d = %d + %d\n" , x , i, a);
                break;
            }
        }


    }





    return 0;
}




