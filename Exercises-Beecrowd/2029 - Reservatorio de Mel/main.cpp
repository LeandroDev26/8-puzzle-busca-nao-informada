#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double v,d, a = 0.0, r = 0.0, pi = 3.14, h = 0.0;

    while(cin>> v >> d)
    {

        r = d/2;
        a = pi *(r * r);
        h = v/a;

        cout<< fixed << setprecision(2);
        cout<< "ALTURA = "<< h <<endl;
        cout<< "AREA = "<< a <<endl;


    }


    return 0;
}
