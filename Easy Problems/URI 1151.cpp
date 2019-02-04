#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x, a=0,b=1,c=0;
    scanf("%d", &x);
    for(int i=1; i<x; i++)
    {
        if(i%2==1)
        {
            printf("%d ",c);
            c=a+b;
            a=c;
        }
        else if(i==2)
            printf("%d ",c);
        else if(i%2==0)
        {
            printf("%d ",c);
            c=a+b;
            b=c;
        }
    }
    printf("%d\n",c);

    return 0 ;
}



























