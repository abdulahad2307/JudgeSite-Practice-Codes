#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n , a = 0 , g = 0 , d = 0;
    while(1)
    {

        scanf("%d" , &n );

        if(n==4)
            break;

        if (n==1)
            a++;
        else if (n==2)
            g++;
        else if (n==3)
            d++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n" , a);
    printf("Gasolina: %d\n" , g);
    printf("Diesel: %d\n" , d);


    return 0;
}



