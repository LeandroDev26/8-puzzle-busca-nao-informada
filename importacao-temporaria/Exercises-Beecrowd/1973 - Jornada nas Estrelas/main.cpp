#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int posicaoAtual = 0, posicaoMax = 0;
    long long n, x, somaArray = 0;
    vector<long long> qt;
    cin>> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> x;
        qt.push_back(x);
    }

    while(posicaoAtual >= 0 && posicaoAtual < qt.size() )
    {

        if(posicaoAtual > posicaoMax)
        {
            posicaoMax = posicaoAtual;
        }

        int erapar = qt[posicaoAtual] % 2 == 0;

        if(qt[posicaoAtual] > 0)
        {
            qt[posicaoAtual] --;
        }

        if(erapar)
        {
            posicaoAtual--;
        }
        else
        {
            posicaoAtual++;
        }
    }

    for(int j = 0 ; j < qt.size(); j++)
    {
        somaArray += qt[j];
    }
    cout<<posicaoMax + 1 << " " << somaArray <<endl;


    return 0;
}
