#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int t ;

    scanf("%d", &t);
    for (int i = 0 ; i < t ; i++)
    {
        char s[6];
        scanf("%s", &s);

        if(strlen(s)==5)
            cout<< 3 <<endl;
        else if ((s[0]=='t' && s[1]=='w')||(s[0]=='t'&&s[2]=='o')||(s[1]=='w'&&s[2]=='o'))
            cout << 2 << endl;
        else if ((s[0]=='o' && s[1]=='n')||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e'))
            cout << 1 << endl;
    }

    return 0 ;
}

