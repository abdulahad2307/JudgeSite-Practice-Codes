#include <bits/stdc++.h>
using namespace std;

long long int rev(long long int n)
{
    long long int i;
    i=0;
    while(n!=0)
    {
        i=(i*10)+(n%10);
        n=n/10;
    }
    return i;
}
int main()
{
    int n ;

    scanf("%d",&n);
    for(int i=0; i< n; i++)
    {
        long long int a ,b;
        int c = 0;
        scanf("%lld",&a);

        b=rev(a);
        while(a!=b)
        {
            a=(a+b);
            b=rev(a);
            c++;
        }
        printf("%d %lld\n",c,a);
    }
    return 0;
}
