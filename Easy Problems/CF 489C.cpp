#include <iostream>
 using namespace std ;
int main()
{
    int n , t , s , r ;
    cin >> n >> t ;
    if (9*n < t  || t == 0)
    {
        cout << "-1 -1" << endl;
        return  0 ;
    }
    else if (n == 1 )
    {
        cout << t << " " << t ;
        return 0 ;
    }

    int H[n] , L[n];

    for (int i = 0 ; i < n ; i++)
    {
        H[i]= 0 ;
        L[i] = 0 ;
    }

    s = t/9 ;

    r = t%9 ;

    for(int i = 0 ; i < s ; i++)
    {
        H[i] = 9;
    }
    H[s] = r ;

    for (int i = n-s ; i < n ; i ++)
    {
        L [i] = 9 ;
    }
    L[0] = r ;

    for (int i = 0 ; i < n ; i++)
    {
        cout << L[i] ;
    }
    cout << " " ;
    for (int i = 0 ; i < n ; i++)
    {
        cout << H[i] ;
    }




}
