#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, m, valor;
    cin>> n >> m ;
    vector<int> numeros;

    for(int i = 0 ; i < m; i++)
    {

        cin>> valor;
        auto it = find(numeros.begin(), numeros.end(), valor);
        if(it == numeros.end())
        {
            numeros.push_back(valor);
        }

    }

          int figurinhasFaltando = (n-numeros.size());
          cout<<figurinhasFaltando<<endl;









    return 0;
}
