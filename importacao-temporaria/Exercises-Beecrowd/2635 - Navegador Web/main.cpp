#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int n, q ;
    string  ns, qs;
    vector <string> pesquisas;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> ns;
        pesquisas.push_back(ns);


    }
    cin>> q;

    for(int j = 0; j < q; j++)
    {
        int maior = 0, cont = 0;

        cin>> qs;
        for(int k = 0 ; k < pesquisas.size(); k++)
        {
            if(pesquisas[k].find(qs) == 0)
            {
                cont++;
                if(maior < pesquisas[k].length())
                {
                    maior = pesquisas[k].length();
                }
            }
        }
        if(cont == 0)
        {
            cout<< -1 <<endl;
        }
        else
        {
            cout<<cont<<" "<<maior<<endl;
        }

    }

    return 0;
}
