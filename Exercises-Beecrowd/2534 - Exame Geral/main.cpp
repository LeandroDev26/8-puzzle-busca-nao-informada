#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q, x, y;
    vector<int> numeros;

    while(cin>> n >> q)
    {


        for(int i = 0 ; i < n ; i++)
        {
            cin>> x;
            numeros.push_back(x);
        }

        sort(numeros.begin(), numeros.end(), std::greater<int>());

        for(int k = 0; k < q ; k++)
        {
            cin>> y;

            cout<<numeros[y-1]<<endl;


        }

        numeros.clear();
    }




    return 0;
}
