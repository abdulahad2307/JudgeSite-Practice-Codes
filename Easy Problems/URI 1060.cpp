#include <iostream>
using namespace std;

int main()
{
    double n [6] , c=0;

    for(int i = 0 ; i < 6; i++)
    {
        cin >> n[i];

        if(n[i] > 0)
            c++;

    }
    cout << c << " valores positivos" << endl ;

    return 0 ;
}


