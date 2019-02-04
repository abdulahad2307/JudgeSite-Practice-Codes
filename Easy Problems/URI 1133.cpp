#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x , y , sum =0;

    scanf("%d %d" , &x , &y);

    if (x > y)
    {
        for (int i = y+1 ; i <x ; i++)
        {
            if(i%5 == 2 || i%5 == 3)
                printf("%d\n", i);
        }
    }
    else if (x < y)
    {
        for (int i = x+1 ; i <y ; i++)
        {
            if(i%5 == 2 || i%5 == 3)
                printf("%d\n", i);
        }
    }

    return 0;
}




