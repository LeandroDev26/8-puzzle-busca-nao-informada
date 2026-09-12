#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, distanciaAb = 0, distanciaBc = 0;

    cin>> a >> b >> c;

    distanciaAb = abs(a - b);
    distanciaBc = abs( b - c);

    if(a > b && c >= b)
    {
        cout<<":)"<<endl;
    }
    else if(a < b && c <= b )
    {
        cout<<":("<<endl;
    }
    else  if(a < b && c > b && ( distanciaAb > distanciaBc))
    {
        cout<<":("<<endl;
    }
    else if(a < b && c > b && (distanciaBc >= distanciaAb) )
    {
        cout<<":)"<<endl;
    }
    else if(a > b && c < b && (distanciaAb > distanciaBc) )
    {
        cout<<":)"<<endl;
    }
    else if(a > b && c < b && (distanciaBc >= distanciaAb) )
    {
        cout<<":("<<endl;
    }
    else if(a == b && c > b )
    {
        cout<<":)"<<endl;
    }
    else
    {
        cout<<":("<<endl;

    }


    return 0;
}
