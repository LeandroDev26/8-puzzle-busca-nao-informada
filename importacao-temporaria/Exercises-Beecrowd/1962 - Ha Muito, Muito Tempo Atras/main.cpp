#include <iostream>

using namespace std;

int main()
{

    long long n, t ;
    cin>> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> t ;
        if((2015 - t) > 0 )
        {
            cout<< ( 2015 - t)<< " D.C."<<endl;
        }
        else if( t >= 2015)
        {
            cout<< ( t - 2015) + 1 << " A.C."<<endl;

        }

    }


    return 0;
}
