#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n ;
    long long int a = 0, b = 1, aux = 0, y = 60;
    vector<long long int> fibonacci;

    for ( int k = 0 ; k <= y ; k++)
    {
        fibonacci.push_back(a);

        aux = a;
        a = b;
        b += aux;

    }


    cin>> t;

    for(int i = 0; i < t; i++)
    {
        cin>> n;

        cout<<"Fib(" << n << ")"<< " = " << fibonacci[n]<<endl;


    }





    return 0;
}
