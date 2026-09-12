#include <iostream>

using namespace std;

int main()
{

    int x, z, soma = 0, cont = 0;
    cin>> x >> z;

    while( z <= x)
    {
        cin>> z;
    }

    for(int i = x; soma <= z ; i++)
    {
        soma += i;
        cont++;
    }

    cout<< cont <<endl;







    return 0;
}
