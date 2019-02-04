#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int A, N, a,b=0;
    scanf("%d %d", &A, &N);
    while(N<=0)
        scanf("%d", &N);
    for(a=1; a<=N; a++)
    {
        b+=A;
        A++;
    }
    printf("%d\n",b);
    return 0;

    return 0;
}





