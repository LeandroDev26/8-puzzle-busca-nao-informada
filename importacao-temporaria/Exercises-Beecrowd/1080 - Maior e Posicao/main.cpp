#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int e, maior, indice;
    vector<int> numeros;


    for (int i = 0; i < 100; i++)
    {
        cin >> e;
        numeros.push_back(e);
    }


    maior = numeros[0];
    indice = 1;


    for (int i = 1; i < numeros.size(); i++)
    {

        if(numeros[i] > maior)
        {
            maior = numeros[i];
            indice = i + 1;
        }
    }


    cout << maior << endl;
    cout << indice << endl;

    return 0;
}
