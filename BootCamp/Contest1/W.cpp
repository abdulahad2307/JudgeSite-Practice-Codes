#include<iostream>
#include<cstdio>
#include<cstring>
#define X 18409900

using namespace std;
bool prime[X];
int pc = 0,tw = 1;
long long int twins[100001];

void seieve()
{
    long long int i,j,k,l;

    prime[0] = prime[1] = true;

    k=2;


    for(i = 2 ; i <= X ; i++)
    {
        while(i<=X && prime[i])
            i++;

        if(i - k == 2)
            twins[tw++] = k;

        k=i;
        for(j = i*i ; j<=X ; j+=i)
        prime[j] = true;
    }
}

int main()
{

int a;
seieve();
    while(scanf("%d", &a))
    {
        printf("(%lld, %lld)\n",twins[a],twins[a]+2);
    }

return 0;
}
