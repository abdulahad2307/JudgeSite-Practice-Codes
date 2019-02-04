# include <bits/stdc++.h>

using namespace std ;

int main()
{
    double A , B , C , MEDIA ;

    cin >> A >> B >> C ;

    if (( 0 <= A && A <=10 ) && (0 <=B && B <= 10) && (0 <=C && C <= 10) )
    {
        MEDIA = (2*A + 3*B + 5*C) / (2+3+5) ;
    }


    printf("MEDIA = %.1f" , MEDIA);
    cout << endl ;
    return 0 ;

}

