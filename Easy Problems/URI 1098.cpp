#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float I = 0 , J , JS = 1 , JL = 3;

    for (I = 0 ; I< 2.2 ; I=I+0.2)
    {
        for ( J = JS; J <=JL ; J++)
        {
            printf("I=%.1f J=%.1f\n" , I , J );
        }
        JS = JS + 0.2 ;
        JL = JL + 0.2 ;
    }

    return 0;
}






