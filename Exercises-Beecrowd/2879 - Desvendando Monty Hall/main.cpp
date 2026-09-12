#include <iostream>

using namespace std;

int main()
{
    int n, xi, ganhou = 0;
    cin>> n;
    for(int i = 0; i < n ; i++)
    {
        cin>> xi;
        if(xi != 1)
        {
            ganhou++;
        }
    }

       cout<<ganhou<<endl;

    return 0;
}
