#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int hst, mst, hen, men, h, m;

  scanf("%d %d %d %d",&hst,&mst,&hen,&men);
  h = hen - hst;
  m = men - mst;

  if(h < 0)
  h = 24 + (hen-hst);

  if(m < 0)
    m = 60 + (men-mst);
    if (mst > men)
    h = h -1;
    else if (mst < men)
     h = h;
  if(hen == hst && men == mst)
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

   else
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);


    return 0 ;
}




















