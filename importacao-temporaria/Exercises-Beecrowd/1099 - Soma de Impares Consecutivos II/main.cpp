#include <iostream>

using namespace std;

int main()
{
    int n, x, y, ini, fim, soma = 0;
    cin>> n;

    for(int i = 0; i < n; i++)//laço externo
    {

        soma = 0;

        cin>> x >> y ;

        if( x > y)
        {

            ini = y;
            fim = x;
        }
        else
        {

            ini = x;
            fim = y;

        }

        for( int k = ini + 1; k < fim; k++)//laço interno
        {
            if(k % 2 != 0)
            {
              soma += k;
            }
        }

        cout<<soma<<endl;
    }


    return 0;
}
