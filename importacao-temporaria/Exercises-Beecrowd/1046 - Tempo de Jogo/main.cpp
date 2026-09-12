#include <iostream>

using namespace std;

int main()
{
    int hi, hf, hr;

    cin>> hi >> hf;



    if(hi == hf)
    {
        cout<< "O JOGO DUROU " << 24 <<" HORA(S)" << endl;
    }
    else if(hf > hi)
    {
        hr = hf - hi;
        cout<< "O JOGO DUROU " << hr <<" HORA(S)" << endl;

    }
    else
    {
        hr = (24 - hi) + hf;
        cout<< "O JOGO DUROU " << hr <<" HORA(S)" << endl;

    }



    return 0;
}
