#include <iostream>

using namespace std;

int main()
{

    int s = 0, t = 0, f = 0, c = 0;
    // saida , tempo de viagem , fusuorário , chegada
    cin>> s >> t >> f;

    c = (s + t + f);

    if( c >= 0 && c <= 23)
    {
        cout<< c <<endl;
    }
    else if( c >= 24)
    {

        c -= 24;
        cout<< c <<endl;
    }
    else if( c < 0)
    {
        c += 24;
        cout<< c <<endl;
    }


    return 0;
}
