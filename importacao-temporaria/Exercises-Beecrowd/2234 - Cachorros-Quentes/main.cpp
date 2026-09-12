#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double h, p, media ;
    cin>> h >> p ;
    media = (h /p);
    cout<< fixed << setprecision(2);
    cout<< media <<endl;

    return 0;
}
