#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t ;

    scanf("%d", &t);

    for(int i = 0 ; i < t ; i++)
    {
        int a , b ;
        int sum = 0 ;

        scanf("%d %d", &a , &b);

        if( a%2 == 0 )
            a = a+1;

        for (int j = a ; j<=b ; j+=2)
        {
            sum = sum + j ;
        }

        printf("Case %d: %d\n",i+1, sum);
    }
    return 0 ;
}


