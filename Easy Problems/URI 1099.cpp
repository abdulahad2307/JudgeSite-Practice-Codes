#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n , x , y ;

    scanf("%d" , &n) ;

    for (int i = 0 ; i < n ; i++)
    {
        int  sum = 0;
        scanf("%d %d" , &x , &y);

        if (x > y)
        {
            for (int j = y+1 ; j < x ; j++ )
            {
                if (j%2 != 0)
                    sum = sum + j ;
            }
        }
        else if (y > x)
        {
            for (int j = x+1 ; j < y ; j++ )
            {
                if (j%2 != 0)
                    sum = sum + j ;
            }
        }
        else if (x==y)
        {
            sum = 0 ;
        }


        printf("%d\n" , sum) ;

    }




    return 0;
}







