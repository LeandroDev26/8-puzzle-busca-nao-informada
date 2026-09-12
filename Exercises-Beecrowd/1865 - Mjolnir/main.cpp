#include <iostream>
#include <string>

using namespace std;

int main()
{

    int c, f = 0;
    string nome;

    cin>> c;

    for(int i = 0 ; i < c ; i++)
    {
        cin>> nome >> f;

        if( nome == "Thor")
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
