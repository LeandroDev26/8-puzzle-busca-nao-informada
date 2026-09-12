#include <iostream>

using namespace std;

int main()
{
    int a, b ;
    cin>> a >> b;

    if(a < b )
    {
        int temp = a;
        a = b;
        b = temp;
    }

    if( a%b == 0)
    {
        cout<<"Sao Multiplos"<<endl;

    }
    else
    {
        cout<<"Nao sao Multiplos"<<endl;
    }



    return 0;
}
