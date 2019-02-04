/*# include <bits/stdc++.h>

using namespace std ;

int main()
{
    double a,b,c,d, m;

    cin >> a >> b >> c >> d  ;

    m = (a*2 + b*3 + c*4 + d*1) / (2+3+4+1) ;
    printf("Media: %.1lf\n" , m );

    if (m >= 7.0)
    {
        cout << "Aluno aprovado." << endl ;
    }
    else if (m>=5.0 && m <= 6.9)
    {
        cout << "Aluno em exame." << endl ;
        double s , a;
        cin >> s ;
        cout << "Nota do exame: " << s << endl ;

        a = (m+s) / 2 ;

        if(a >= 5.0)
            cout << "Aluno aprovado." << endl ;
        else if (a <= 4.9)
            cout << "Aluno reprovado." << endl ;

        printf("Media final: %.1lf\n", a);
    }
    else if (m <= 4.9)
        cout << "Aluno reprovado." << endl ;

    return 0 ;

}*/

# include <bits/stdc++.h>

using namespace std ;

int main()

{

    double a, b, c, d, e, m;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    m = (a * 2 + b * 3 + c * 4 + d) / 10;

    printf("Media: %.1f\n", m);

    if (m >= 7.0){

        printf("Aluno aprovado.\n");

    }

    else if (m >= 5.0)

    {

        printf("Aluno em exame.\n");

        scanf("%lf", &e);

        printf("Nota do exame: %.1f\n", e);

        if (e + m / 2.0 > 5.0){

            printf("Aluno aprovado.\n");

        }

        else{

            printf("Aluno reprovado.\n");

        }

        printf("Media final: %.1f\n", (e + m) / 2.0);

    }

    else{

        printf("Aluno reprovado.\n");

    }



    return 0;

}

