#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int M,N,i,a,sum;
    while(1)
    {
        scanf("%d%d",&M,&N);
        if(M==N)
            break;

        if (M > N )
            printf("Decrescente\n");
        else if (M < N)
            printf("Crescente\n");

    }
    return 0;
}
