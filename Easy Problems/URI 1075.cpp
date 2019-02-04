#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    long long int i,n;
    scanf("%lld",&n);
    for(i=1;i<=10000;i++)
    {
        if (i % n == 2)
            printf("%d\n" , i);

    }
    return 0;
}



