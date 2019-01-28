#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s ;
    int i = 1;
    while(cin >> s && s !="*")
    {

        if ("Hajj" == s)
            printf("Case %d: Hajj-e-Akbar\n" ,i);
        else if ("Umrah" == s)
            printf("Case %d: Hajj-e-Asghar\n" ,i);

        i++;
    }

    return 0 ;
}
