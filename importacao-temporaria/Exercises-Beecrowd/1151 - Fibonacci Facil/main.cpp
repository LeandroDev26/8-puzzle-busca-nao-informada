#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 1, aux = 0 ;
    cin>> n;

    for(int i = 0; i < n; i++)
    {

        if(i == (n - 1) )
        {
            cout<< a <<endl;

        }
        else
        {
            cout<< a <<" ";
            aux = a ;
            a = b;
            b += aux;
        }
    }


    return 0;
}
