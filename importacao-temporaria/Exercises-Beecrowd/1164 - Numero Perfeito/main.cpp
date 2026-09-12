#include <iostream>

using namespace std;

int main()
{
    int n, x, soma = 0;

    cin>> n;

    for(int i = 0; i < n ; i++)
    {

        cin>> x;

        soma = 0;

        for(int k = 1; k < x; k++)
        {

            if( x % k == 0 )
            {
                soma += k;
            }
        }

        if( soma == x)
        {
            cout<< x << " eh perfeito"<<endl;
        }else
        {
            cout<< x << " nao eh perfeito"<<endl;

        }

    }

    return 0;
}
