#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n==1)
        return false;

    for(int i=2 ; i*i <= n ; i++ )
    {
        if(n%i == 0)
            return false;
    }
    return true ;
}

bool div3(int n)
{
    int c = 0 ;
    for (int i = 1 ; i <= n/2 ; i++)
    {
        if(n%i == 0)
            c++;
    }

    if(c == 2)
        return true;
    else
        return false;
}

int main()
{
    int t ;

    scanf("%d", &t);
    for (int i = 0 ; i < t ; i++)
    {
        int n ;
         cin >> n ;
        if(isPrime(n)==true)
            cout << "NO" << endl;
        else if (div3(n)== true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0 ;
}

