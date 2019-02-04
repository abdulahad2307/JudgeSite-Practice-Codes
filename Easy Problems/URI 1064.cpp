#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double n [6] , c=0 , sum = 0 ;

    for(int i = 0 ; i < 6; i++)
    {
        cin >> n[i];

        if(n[i] > 0)
        {
            c++;
            sum = sum + n[i];
        }

    }
    cout << c << " valores positivos" << endl ;
    printf("%.1lf\n" , sum/c );

    return 0 ;
}



