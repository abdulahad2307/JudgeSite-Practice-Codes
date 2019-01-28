#include <iostream>
#include <stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    while(1)
    {
        int N ;
        int G = 0;

        scanf("%d" , &N);

        if(N==0)
            break;

        if (N > 1 && N < 501)
        {

            for(int i=1;i<N;i++)
            {
                for(int j=i+1;j<=N;j++)
                {
                    G+=__gcd(i,j);

                }
            }
            printf("%d\n" , G);


        }


    }

    return 0;
}

