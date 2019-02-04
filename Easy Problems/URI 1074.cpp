#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    long long int i,n,input,in=0,out=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&input);

        if (input%2 == 0 && input > 0)
            printf("EVEN POSITIVE\n");
        else if (input % 2 == 0 && input < 0)
            printf("EVEN NEGATIVE\n");
        else if (input % 2 != 0 && input > 0)
            printf("ODD POSITIVE\n");
        else if (input % 2 != 0 && input < 0)
            printf("ODD NEGATIVE\n");
        else if (input == 0)
            printf("NULL\n") ;

    }
    return 0;
}


