#include <iostream>
#include <stdio.h>


using namespace std;
int main()
{
    int t ;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i ++)
    {
        int a , b ;

        scanf("%d %d" , &a , &b);

        if(a==b)
            printf("=\n");
        else if (a<b)
            printf("<\n");
        else if (a>b)
            printf(">\n");
    }

    return 0;
}


