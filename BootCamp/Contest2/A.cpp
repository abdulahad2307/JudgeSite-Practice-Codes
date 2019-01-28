#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int a , b , d;

    while (scanf("%lld %lld", &a , &b)!=EOF)
    {
        d = abs(a-b);

        printf("%lld\n", d);
    }
    return 0 ;
}

