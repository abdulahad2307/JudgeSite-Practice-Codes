#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int m , n ;



    for (int i = 0 ; m > 0 && n > 0; i++)
    {
        scanf("%d %d", &m , &n);
        int sum = 0;
        while( m > 0 && n > 0)
        {
            if(m>n)
            {
                for (int i = n ; i <=m ; i++)
                {
                    printf("%d " ,i);
                    sum = sum + i ;
                }
                printf("Sum=%d\n" , sum);
                break ;
            }
            else if (n > m)
            {
                for (int i = m ; i <=n ; i++)
                {
                    printf("%d " ,i);
                    sum = sum + i ;
                }
                printf("Sum=%d\n" , sum);
                break ;
            }
        }

    }

    return 0;
}







