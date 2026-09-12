#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{

    char t ;
    double soma = 0;
    int linhas = 12;
    int colunas = 12;
    vector< vector <double>> matriz (linhas, vector<double> (colunas, 0));


    cin>> t ;

    for(int i = 0 ; i < linhas; i++)
    {

        for(int j = 0 ; j < colunas ; j++)
        {
            cin>> matriz[i][j];
        }
    }

    cout << fixed << setprecision(1);

    for(int i = 0 ; i < linhas; i++)
    {
        for(int j = 0 ; j < colunas; j++)
        {
            if(j > i && j > (11 - i))
            {
                soma += matriz[i][j];
            }
        }
    }
    if( t == 'S')
    {
        cout<< soma <<endl;
    }
    else if( t == 'M')
    {

        cout << soma / 30.0 << endl;
    }



    return 0;
}
