# include <bits/stdc++.h>
using namespace std;

int main ()
{

    int a , b , c , m , f;

    cin >> a >> b >> c ;

    m = (a + b + abs(a-b)) / 2 ;
    f = (m+c+abs(m-c))/2 ;

    cout << f << " eh o maior" << endl  ;

    return 0;
}



