#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double a , b , c , d ,e , r1 , r2 ;

    scanf("%lf%lf%lf" ,&a,&b,&c);


    d = (pow(b,2) - (4*a*c)) ;
    e = pow(d,0.5);


    if (a != 0 && d >=0 )
    {
        r1 =  (-b+e)/ (2*a );
        r2 =   (-b-e)/ (2*a) ;
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1,r2);

    }
    else
        printf("Impossivel calcular\n");




    return 0 ;

}

