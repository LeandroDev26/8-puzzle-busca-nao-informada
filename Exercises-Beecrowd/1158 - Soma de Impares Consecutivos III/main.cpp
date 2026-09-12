#include <iostream>

using namespace std;

int main()
{

    int n, x = 0, y = 0, soma = 0, k = 1;
    cin>> n;

    for(int i = 0 ; i < n; i++)
    {

        cin >> x >> y;
        soma = 0, k = 1;

        while( k <= y)
        {


            if( x % 2 != 0)
            {

                soma += x;
                k++;
                x += 2;
            }
            else
            {
                x++;
            }
        }
        cout<< soma <<endl;

    }




    return 0;
}
