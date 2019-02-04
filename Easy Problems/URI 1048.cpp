#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
   double n , ns  ;

   scanf("%lf" , &n);

   if (n > 0 && n <= 400 )
   {
        ns = .15 * n + n ;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",(n * 0.15));
        printf("Em percentual: 15 %%\n");
   }

   if (n > 400 && n <= 800)
   {
        ns = .12 * n + n ;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",(n * 0.12));
        printf("Em percentual: 12 %%\n");
   }

   if (n > 800 && n<= 1200 )
   {
        ns = .10 * n + n ;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",(n * 0.10));
        printf("Em percentual: 10 %%\n");
   }

   if (n > 1200 && n <= 2000)
   {
        ns = .07 * n + n ;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",(n * 0.07));
        printf("Em percentual: 7 %%\n");
   }

   if (n > 2000)
   {
       ns = .04 * n + n ;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",(n * 0.04));
        printf("Em percentual: 4 %%\n");
   }


    return 0 ;
}
