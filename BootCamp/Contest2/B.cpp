#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t ;

    for (int i = 0 ; i < 80 ; i++)
    {
        int n , a , sgt = 0 , agt = 0, eb;
        scanf("%d", &n);

        if (n==0)
            break;

        for (int j = 0 ; j < n ; j++ )
        {
            scanf("%d" , &a);

            if (a == 0)
                agt++;
            else
                sgt++;
        }

        eb = sgt - agt;

        printf("Case %d: %d\n", i+1 , eb);

    }

    return 0 ;
}


