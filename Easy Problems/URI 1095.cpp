#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int I = 1 , J = 60;

    for (I = 1 ; J >=0 ; I=I+3)
    {
        printf("I=%d J=%d\n" , I , J );

        J = J-5;
    }

    return 0;
}





