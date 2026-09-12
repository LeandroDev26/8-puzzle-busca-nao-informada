#include <iostream>
#include <string>
using namespace std;

int main()
{

    string frase ;

    while(getline(cin, frase))
    {
        for(int i = 0 ; i < frase.length(); i++)
        {
            if(frase[i] != ',')
            {
                cout<<frase[i];
            }
            else
            {
                cout<<endl;
            }
        }
        cout<<endl;

    }










    return 0;
}
