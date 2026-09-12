#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b ;

    cin>> a >> b;
    int r = a % b;

    if( r < 0)
    {
        r = r + abs(b);
    }


    int q = (a - r)/b;

    cout<< q << " " << r <<endl;

    return 0;
}
