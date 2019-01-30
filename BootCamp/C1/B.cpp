#include <cstdio>
#include <iostream>
using namespace std;

int isPrime (int argc, char const *argv[]);

bool prime;

int main()
{
    for (int i = 1 ; i <= 1000 ; i++)
    {
        bool prime = true ;

        for
    }
	return 0;
}

int isPrime (int argc, char const *argv[])
{
    for(int i = 1; i <= 1000; i++)
    {
		bool prime = true;

		for(int j = 2; j < i; j++){
			if(i % j == 0 || i == j){
				prime = false;
				break;
			}
		}

		if(prime == true)
        {
			cout << i << " is prime." << endl;
		}
	}
}
