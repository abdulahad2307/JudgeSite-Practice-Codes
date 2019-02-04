#include <iostream>
#include <cstdio>
#define pi 3.14159
using namespace std;

int main ()
{
    float A , B , C , tri , cir , trp , sqr , rect  ;

    cin >> A >> B >> C ;

    tri = .5 * A * C ;
    printf("TRIANGULO: %.3f\n", tri);

    cir = pi * C * C;
    printf("CIRCULO: %.3f\n" , cir);

    trp = ((A+B)/2 ) * C ;
    printf("TRAPEZIO: %.3f\n" , trp);

    sqr = B * B ;
    printf("QUADRADO: %.3f\n" , sqr);

    rect = A * B ;
    printf("RETANGULO: %.3f\n" , rect);

    return 0;
}

