#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int st , en ;

    cin >> st >> en ;

    if (en > st)
        cout << "O JOGO DUROU "<< en-st << " HORA(S)" << endl ;
    else if (en == st)
        cout << "O JOGO DUROU 24 HORA(S)" << endl ;
    else
        cout << "O JOGO DUROU "<< 24-st+en << " HORA(S)" << endl ;


    return 0 ;
}
