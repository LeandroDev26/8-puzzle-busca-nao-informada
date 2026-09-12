#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    char t;
    double soma = 0;
    int l;
    int linhas = 12;
    int colunas = 12;
    vector<vector<double>> matriz(linhas, vector<double>(colunas, 0));

    cin>> l;
    cin>> t;

    for(int i = 0; i < linhas; i++)
    {

        for(int j = 0; j < colunas; j++)
        {
            cin >> matriz[i][j];
        }
    }

    cout<< fixed << setprecision(1);

    for(int k = 0; k < linhas; k++)
    {
        soma += matriz[k][l];

    }



    if( t == 'S')
    {
        cout<< soma <<endl;
    }
    else if( t == 'M')
    {

        cout << soma / 12.0 << endl;
    }



    return 0;

}
