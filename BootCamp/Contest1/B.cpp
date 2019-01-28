#include <iostream>
#include <stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int t , G , temp, F;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i ++)
    {
        int arr [100];

        for (int i = 0 ; i < 100 ; i++)
        {
            temp = G ;
            for (int j = i+1 ; j < 100 ; j++)
            {
                G = __gcd(arr[i],arr[j]);
            }

            if (temp < G)

        }
    }

    return 0;
}



