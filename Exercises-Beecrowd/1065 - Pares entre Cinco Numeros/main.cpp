#include <iostream>

using namespace std;

int main()
{
    int e, cont = 0;
    for(int i = 0; i < 5; i++)
    {
        cin>> e ;

        if ( e % 2 == 0)
        {
            cont++;
        }
    }

    cout<< cont << " valores pares"<<endl;


    return 0;
}
