#include <iostream>

using namespace std;

int main()
{

    int t, n, k ;
    cin>> t ;

    for(int i = 0; i < t; i++)
    {
        cin>> n >> k;
        int result = (n/k) + (n%k);
        cout<<result<<endl;

    }







    return 0;
}
