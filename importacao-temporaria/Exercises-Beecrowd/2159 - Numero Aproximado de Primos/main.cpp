#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    cout<< fixed << setprecision(1);
    double n, p, m ;
    cin>> n;
    p = n / log(n);
    m = p * 1.25506;
    cout<< p <<" "<< m <<endl;

    return 0;
}
