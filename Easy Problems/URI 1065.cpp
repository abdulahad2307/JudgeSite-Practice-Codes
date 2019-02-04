#include <iostream>
using namespace std;

int main()
{
    int n [5] , c=0;

    for(int i = 0 ; i < 5; i++)
    {
        cin >> n[i];

        if(n[i]% 2 == 0)
            c++;

    }
    cout << c << " valores pares" << endl ;

    return 0 ;
}


