#include <iostream>
#include <string>

using namespace std;

int main()
{

    string l;
    getline(cin, l);

    if(l.length() > 80)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;

    }



    return 0;
}
