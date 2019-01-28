#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;
int main()
{
    int t  ;
    int n  ;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i ++)
    {
        int  c = 1;
        scanf("%d", &n);

        if(n == 1)
        {
            cout << 0 << endl ;
            continue;
        }

        for (int j=2; j*j<=n; j++)
        {

            if (n%j==0)
            {
                if(j*j==n)
                    c += j;
                else
                    c = c+j+(n/j);
            }
        }

        cout << c << endl ;



    }

    return 0;
}



