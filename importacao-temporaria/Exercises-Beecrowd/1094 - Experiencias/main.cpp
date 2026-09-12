#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string tipo;
    int n, cobaias, totcob = 0,totc = 0, totr = 0, tots = 0;
    vector<int> numeros;
    vector<string> simbolos;
    double porcentC, porcentR, porcentS;
    cin>> n;

    for( int i = 0; i < n ; i++)
    {
        cin>> cobaias >> tipo ;
        numeros.push_back(cobaias);
        simbolos.push_back(tipo);

    }

    for(int i = 0; i < numeros.size(); i++)
    {
        totcob += numeros[i];

        if(simbolos[i] == "C")
        {
            totc += numeros[i];
        }

        else if(simbolos[i] == "S")
        {
            tots += numeros[i];
        }

        else if(simbolos[i] == "R")
        {
            totr += numeros[i];
        }
    }

    cout<<"Total: "<< totcob << " cobaias"<<endl;
    cout<<"Total de coelhos: "<< totc <<endl;
    cout<<"Total de ratos: "<< totr <<endl;
    cout<<"Total de sapos: "<< tots <<endl;

    cout<< fixed << setprecision(2);
    porcentC = (totc * 100.0)/totcob;
    porcentR = (totr * 100.0)/totcob;
    porcentS = (tots * 100.0)/totcob;

    cout<<"Percentual de coelhos: "<< porcentC << " %" << endl;
    cout<<"Percentual de ratos: "<< porcentR << " %" << endl;
    cout<<"Percentual de sapos: "<< porcentS << " %" << endl;





    return 0;
}
