#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <int> n;
    int v ;
    cin>> v;

    for(int i = 0 ; i < 10; i++)
    {
        n.push_back(v);
        v += v;

    }

    for(int k = 0; k < n.size(); k++)
    {
        cout <<"N["<< k << "]"<< " = " << n[k]<<endl;
    }





    return 0;
}
