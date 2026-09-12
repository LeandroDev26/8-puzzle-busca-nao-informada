#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{

    long long n, x;
    vector<long long> listaDeTrabalhos;
    while(cin>> n )
    {
        listaDeTrabalhos.clear();
        long long  soma = 0, rangel = 0, gugu = 0;
        for(int i = 0; i < n; i++)
        {
            cin>> x;
            listaDeTrabalhos.push_back(x);
            soma += x;

        }
        gugu = soma;
        long long diferenca = 200000000000LL;
        long long novaDiferenca;
        for(int j = 0 ; j < n; j++)
        {

            rangel += listaDeTrabalhos[j];
            gugu -= listaDeTrabalhos[j];
            novaDiferenca = abs(rangel - gugu);

            if(novaDiferenca < diferenca)
            {
                diferenca = novaDiferenca;
            }
        }

        cout<<diferenca<<endl;

    }



    return 0;
}
