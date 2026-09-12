#include <iostream>

using namespace std;

int main()
{

    long long a, b, c ;
    cin>> a >> b >> c;

    if ( a + b > c && a + c > b && b + c > a )
    {
        if(a == b && b == c)
        {
            cout<<"Valido-Equilatero"<<endl;
        }
        else if( a == b || a == c || b == c)
        {
            cout<<"Valido-Isoceles"<<endl;
        }
        else
        {
            cout<<"Valido-Escaleno"<<endl;
        }


        if((a*a) == (b* b)+(c*c))
        {
            cout<<"Retangulo: S"<<endl;
        }
        else   if( (b*b) == (a*a)+(c*c))
        {
            cout<<"Retangulo: S"<<endl;
        }
        else   if( (c*c) == (a* a)+(b*b))
        {
            cout<<"Retangulo: S"<<endl;
        }
        else
        {
            cout<<"Retangulo: N"<<endl;

        }
    }
    else
    {
        cout<<"Invalido"<<endl;
    }

    return 0;
}
