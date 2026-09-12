#include <iostream>

using namespace std;

int main()
{

    int t, n, totp;

    while (cin>>  t && t != 0)
    {
        for (int i = 0 ; i < t; i++)
        {
            cin>> n;
            if(n % 2 == 1)
            {
                totp = (2 * n ) - 1;
                cout<< totp <<endl;
            }
            else
            {
                totp = (2 * n) - 2;
                cout<< totp <<endl;
            }
        }
    }



    return 0;
}
