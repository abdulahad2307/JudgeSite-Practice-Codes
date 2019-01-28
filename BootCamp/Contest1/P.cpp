#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t ;

    scanf("%d", &t);

    for(int i = 1 ; i <= t ;i++)
    {
        int n , p, q , m , dim = 0 ;

        scanf("%d %d %d", &n , &p , &q);

        for (int j = 0 ; j < n ; j++)
        {
            scanf("%d",&m);

            if(m <=q && p > 0)
            {
                dim++;
                p--;
                q = q-m;
            }
        }
        printf("Case %d: %d\n",i, dim);

    }
    return 0;
}

