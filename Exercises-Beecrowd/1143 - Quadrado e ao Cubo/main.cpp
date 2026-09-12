#include <iostream>

using namespace std;

int main()
{
    int n = 0, numero = 1;
    cin>> n;

    for (int i = 0 ; i < n ; i++)
    {
        cout<< numero << " " << (numero*numero) << " " << (numero* numero * numero)<<endl;
        numero++;
    }





    return 0;
}
