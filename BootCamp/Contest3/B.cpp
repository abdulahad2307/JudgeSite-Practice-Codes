#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);

    for (int i = 0; i< t; i++)
    {
        int n;
        scanf("%d" , &n);


        int hj=0, lj=0;

        int p, c;

        scanf("%d" , &p);

        for (int j = 1; j < n; j++)
        {
            scanf("%d" , &c);

            if (c > p)
                hj++;
            else if (c < p)
                lj++;

            p = c;
        }
        printf("Case %d: %d %d\n", i+1,hj,lj);
    }

}
