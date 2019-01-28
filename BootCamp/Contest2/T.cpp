#include <bits/stdc++.h>

using namespace std;

bool isLY(int year )
{

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false ;

    return 0;
}

int main()
{
    int year;

    while (scanf("%d", &year)!=EOF)
    {
        if(year%15 == 0)
        {
            if(isLY(year) == true)
                cout << "This is leap year." << endl << "This is huluculu festival year." << endl << endl;
            else
                cout << "This is huluculu festival year." << endl << endl;
        }
        else if (year%55 == 0)
        {
            if(isLY(year)== true)
                cout << "This is leap year." << endl << "This is bulukulu festival year." << endl << endl;
            else
                cout << "This is bulukulu festival year." << endl << endl;

        }
        else if (isLY(year) == true)
            cout << "This is leap year." << endl << endl;
        else
            cout << "This is an ordinary year." << endl << endl ;
    }
    return 0 ;
}


