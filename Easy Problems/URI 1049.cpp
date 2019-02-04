#include <iostream>
#include <cstring>

using namespace std;

int main()
{
 string c;

 cin >> c;

 if(c == "vertebrado"){

  cin >> c;
  if(c == "ave"){

   cin >> c;
   if(c == "carnivoro"){
    cout << "aguia" << endl;
   }else{
    cout << "pomba" << endl;
   }
  }else{

   cin >> c;
   if(c == "onivoro"){
    cout << "homem" << endl;
   }else{
    cout << "vaca" << endl;
   }
  }
 }else{

  cin >> c;
  if(c == "inseto"){

   cin >> c;
   if(c == "hematofago"){
    cout << "pulga" << endl;
   }else{
    cout << "lagarta" << endl;
   }
  }else{

   cin >> c;
   if(c == "hematofago"){
    cout << "sanguessuga" << endl;
   }else{
    cout << "minhoca" << endl;
   }
  }
 }
 return 0;
}




/*#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s ;

    cin >> s ;

    if (s == "vertebrado")
    {
        cin >> s ;
        if (s == "ave")
        {
            cin >> s ;
            if (s == "carnivoro")
                cout << "aguia" << endl ;
            else
                cout << "pomba" << endl ;
        }
        else if (s == "mamifero")
        {
            cin >> s ;
            if (s == "onivoro")
                cout << "homem" << endl ;
            else
                cout << "vaca" << endl ;
        }
    }
    else if (s == "invertebrado")
    {
        cin >> s ;
        if (s == "inseto")
        {
            cin >> s ;
            if (s == "hematofago")
                cout << "pulga" << endl ;
            else
                cout << "lagarta" << endl ;
        }
        else if (s == "anelideo")
        {
            cin >> s ;
            if (s == "hematofago")
                cout << "sanguessuga" << endl ;
            else
                cout << "minhoca" << endl ;
        }
    }


    return 0 ;
}

*/
