#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int I = 1 , J , JS = 7 , JL = 5 ;

    for (I = 1 ; I<=9 ; I=I+2)
    {
        for (J = JS ; J >= JL  ; J--)
        {
            printf("I=%d J=%d\n" , I , J );
        }
        JS = JS + 2 ;
        JL = JL + 2 ;
    }

    return 0;
}






