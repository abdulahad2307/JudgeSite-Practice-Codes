#include <iostream>
#include <stdio.h>


using namespace std;
int main()
{
    int t , g ,l;
    scanf("%d" , &t);

    for (int i = 0 ; i < t ; i++)
    {
        scanf("%d %d", &g , &l);

        if (l%g == 0)
            printf("%d %d\n" , g , l);
        else
            printf("-1\n");
    }

    return 0;
}



