# include <bits/stdc++.h>

using namespace std ;

int main()
{
    double A , B , MEDIA ;

    cin >> A >> B ;

    if (( 0 <= A && A <=10 ) && (0 <=B && B <= 10))
    {
        MEDIA = (3.5*A + 7.5*B) / (3.5+7.5) ;
    }


    printf("MEDIA = %.5f" , MEDIA);
    cout << endl ;
    return 0 ;

}
