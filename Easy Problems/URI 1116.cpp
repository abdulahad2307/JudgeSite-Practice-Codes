#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int n , x , y;
    double div ;

    scanf("%d" , &n);

    for (int i = 0 ; i<n ; i++)
    {
        scanf("%d %d" , &x , &y);

        if (y==0)
            printf("divisao impossivel\n");
        else
        {
            div = x/(y*1.00);
            printf("%.1lf\n", div);
        }

    }


    return 0;
}


