#include <iostream>
using namespace std;

int main()
{
    int n [5] , eve=0 , odd=0 , pos = 0 , neg=0 ;

    for(int i = 0 ; i < 5; i++)
    {
        cin >> n[i];

        if(n[i]% 2 == 0)
            eve++;
        else if (n[i]%2 !=0)
            odd++ ;

        if (n[i] > 0 )
            pos++;
        else if (n[i]< 0)
            neg ++ ;

    }
    cout << eve << " valor(es) par(es)" << endl ;
    cout << odd << " valor(es) impar(es)" << endl ;
    cout << pos << " valor(es) positivo(s)" << endl ;
    cout << neg << " valor(es) negativo(s)" << endl ;

    return 0 ;
}


