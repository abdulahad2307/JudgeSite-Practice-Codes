#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int M;
    while(1)
    {
        scanf("%d",&M);
        if(M==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }


        if (M != 2002)
            printf("Senha Invalida\n");

    }
    return 0;
}

