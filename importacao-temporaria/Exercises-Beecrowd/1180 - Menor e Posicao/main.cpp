#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, y, menor = 0;
    vector <int> x;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin>> y;
        x.push_back(y);

        if(i == 0)
        {
            menor = x[0];

        }

        else if(menor > x[i])
        {
            menor = x[i];
        }
    }

    cout<<"Menor valor: " << menor <<endl;


    for(int k = 0 ; k < x.size(); k++)
    {

        if(menor == x [k])
        {
            cout<< "Posicao: "<< k <<endl;
            break;
        }
    }






    return 0;
}
