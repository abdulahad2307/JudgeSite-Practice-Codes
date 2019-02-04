#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x , y ;

    scanf("%d %d" , &x , &y);

    for (int i = 1 ; i <= y ; i++)
    {
        printf("%d " , i);

        if(i%x == 0)
            printf("\n");
    }
    printf("\n");

    return 0;
}











