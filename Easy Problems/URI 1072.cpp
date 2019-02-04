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
        if(input>=10 && input<=20)
            in++;
        else
            out++;
    }
    printf("%lld in\n%lld out\n",in,out);
    return 0;
}

