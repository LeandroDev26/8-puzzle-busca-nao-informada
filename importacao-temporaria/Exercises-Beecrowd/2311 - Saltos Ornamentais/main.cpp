#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << fixed << setprecision(2);

    for(int i = 0 ; i < n ; i++)
    {
        string nome;
        double gd, nota;

        double soma = 0, maior = 0, menor = 10.0;

        cin >> nome >> gd;

        for(int j = 0 ; j < 7; j++)
        {
            cin >> nota;
            soma += nota;

            if(nota > maior)
            {
                maior = nota;
            }
            if(nota < menor)
            {
                menor = nota;
            }
        }

        double resultado = (soma - (menor + maior)) * gd;
        cout << nome << " " << resultado << endl;
    }

    return 0;
}
