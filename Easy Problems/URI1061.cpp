#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string dia;

    int diai,diaf,df,hori,horf;

    int mini,minf,seci,secf ,sec , d , h , m , s;

    scanf("%s %d", &dia, &diai);
    scanf("%d : %d : %d", &hori, &mini, &seci);

    scanf("%s %d", &dia, &diaf);
    scanf("%d : %d : %d", &horf, &minf, &secf);

    df = diaf - diai -1 ;

    sec = (86400- (hori*3600 + mini*60 + seci*60)) + (df*86400) +  (horf*3600 + minf*60 + secf*60) ;

    d = sec / 86400;

    sec = sec % 86400;
    h = sec/3600;

    sec = sec % 3600 ;
    m = sec/ 60 ;

    s = sec%60 ;

    cout << d << " dia(s)" << endl ;
    cout << h << " hora(s)" << endl ;
    cout << m << " minuto(s)" << endl ;
    cout << s << " segundo(s)" << endl ;




    return 0 ;
}



