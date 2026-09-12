#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int xf, yf, xi, yi, vi, r1, r2;
    double Di, Am;

    while(cin>> xf >> yf >> xi >> yi >> vi >> r1 >> r2)
    {
        Di = (sqrt(pow(xi - xf, 2) + pow(yi - yf, 2) ) );
        Di += (vi * 1.5);
        Am = (r1 + r2);
        if(Di <= Am)
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }

    return 0;
}
