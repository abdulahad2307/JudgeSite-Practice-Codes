#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n , a[10];
    printf("Lumberjacks:\n");
    scanf("%d",&n);
    for(int i=0; i< n; i++)
    {
        int f , m = 0 , c=0 ;
       for (int j = 0 ; j < 10 ; j++)
       {
           scanf("%d" , &a[j]);
       }
       for (int j = 0 ; j < 10 ; j++)
       {
           if (a[j+1]> a[j])
                m++;
            else if (a[j+1]< a[j])
                c++;
       }

        if(m>=9 || c >= 9)
            printf("Ordered\n");
        else
            printf("Unordered\n");

    }
    return 0;
}

