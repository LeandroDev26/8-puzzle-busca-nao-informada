#include <iostream>

using namespace std;

int main()
{


    int n, t, mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin>> t;

        if(t % 2 == 0)
        {
            mult2++;
        }
        if(t % 3 == 0)
        {
            mult3++;
        }
        if(t % 4 == 0)
        {
            mult4++;
        }
        if(t % 5 == 0)
        {
            mult5++;
        }

    }

    cout<< mult2 <<" Multiplo(s) de 2"<<endl;
    cout<< mult3 <<" Multiplo(s) de 3"<<endl;
    cout<< mult4 <<" Multiplo(s) de 4"<<endl;
    cout<< mult5 <<" Multiplo(s) de 5"<<endl;
    return 0;
}
