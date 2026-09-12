#include <iostream>

using namespace std;

int main()
{

    int n = 0, numero = 1;
    cin>> n ;

    for (int i = 0; i < n ; i++)
    {

        cout<< numero << " " << numero + 1 << " " << numero +2 << " " << "PUM" <<endl;

        numero += 4;
    }



    return 0;
}
