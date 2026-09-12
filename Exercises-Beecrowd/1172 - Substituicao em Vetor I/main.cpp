#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector <int> num ;
    int x = 0;
    for(int i = 0 ; i < 10; i++)
    {
        cin>> x;
        if( x <= 0)
        {
            x = 1;
        }
        num.push_back(x);

    }

    for(int k = 0 ; k < num.size(); k++)
    {
        cout<<"X["<< k <<"]"<< " = " << num[k]<<endl;
    }




    return 0;
}
