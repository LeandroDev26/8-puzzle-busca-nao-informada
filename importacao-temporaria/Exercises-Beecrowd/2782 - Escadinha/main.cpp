#include <iostream>
#include <vector>
using namespace std;

int main()
{

    long long n, x;
    vector<long long> numeros;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin>> x;
        numeros.push_back(x);

    }


    if (n == 1 || n == 2)
    {
        cout << 1 << endl;
        return 0;
    }

    int contador = 1;
    int diferencaAtual = numeros[1] - numeros[0];
    int novaDiferenca;



    for(int j = 2 ; j < n ; j++)
    {
        novaDiferenca = numeros[j] - numeros[j-1];
        if(novaDiferenca != diferencaAtual)
        {
            contador++;
            diferencaAtual = novaDiferenca;
        }

    }



    cout<<contador<<endl;




    return 0;
}
