#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n , f = 1;

    scanf("%d" , &n);

    for (int i = 1 ; i <= n ; i++ )
    {
        f = f*i ;
    }

    printf("%d\n", f);

    return 0 ;
}




























