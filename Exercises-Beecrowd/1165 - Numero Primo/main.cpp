#include <iostream>

using namespace std;

int main()
{

    int n, x, cont = 0;

    cin >> n;

    for (int i = 0 ; i < n ; i++)
    {

        cin>> x ;
        cont = 0;

        for(int k = 1; k <= x; k++)
        {

            if( x % k == 0)
            {
                cont++;
            }
        }

        if( cont == 2)
        {
            cout<< x << " eh primo"<<endl;
        }
        else
        {
            cout<< x << " nao eh primo"<<endl;

        }


    }






    return 0;
}
