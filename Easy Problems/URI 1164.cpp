#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int N, X, m, d=0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {
        scanf("%d", &X);
        m=X/2;
        d=0;
        for(int j=1; j<=m; j++)
        {
            if(X%j==0)
                d+=j;
        }
        if(d==X)
            printf("%d eh perfeito\n",X);
        else
            printf("%d nao eh perfeito\n",X);
    }
    return 0;
}







