#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n , x , g ,total , c =0  ,r =0  , s= 0 ;
    char type;
    double z , d ,m ;

    scanf("%d" , &n);

    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d %c" , &x , &type);

        if (type == 'C')
        {
            c = c + x ; ;

        }
        else if (type == 'R')
        {
            r = r +x;
        }
        else if (type== 'S')
        {
            s = s + x ;
        }
    }

    g=c+r+s;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n" , g , c , r, s);


    z=(c/(g*1.0))*100.00;
    d=(r/(g*1.0))*100.00;
    m=(s/(g*1.0))*100.00;

    printf("Percentual de coelhos: %.2lf %%\n",z);
    printf("Percentual de ratos: %.2lf %%\n",d);
    printf("Percentual de sapos: %.2lf %%\n",m);

    return 0;
}




