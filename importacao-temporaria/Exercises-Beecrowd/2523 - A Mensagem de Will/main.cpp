#include <iostream>
#include <string>
using namespace std;

int main()
{

    string alfabeto, frase;
    int n, indice;
    while(cin>> alfabeto)
    {

        cin>> n ;
        for(int i = 0 ; i < n; i++)
        {
            cin>> indice;
            indice -= 1;

            frase.push_back(alfabeto[indice]);

        }
        cout<< frase <<endl;
        alfabeto.clear();
        frase.clear();
    }

    return 0;
}
