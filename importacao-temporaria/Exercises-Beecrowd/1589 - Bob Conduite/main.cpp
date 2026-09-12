#include <iostream>

using namespace std;

int main()
{

    int t, r1, r2, menorRaio;
    cin>> t ;
    for( int i = 0; i < t ; i++)
    {
        cin>> r1 >> r2;
        menorRaio = (r1 + r2);
        cout<< menorRaio << endl;
    }


    return 0;
}
