#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int c, n;
    string linha1, linha2, frase;
    map<char, char> dicionario;


    while (cin >> c >> n)
    {

        cin.ignore();


        getline(cin, linha1);
        getline(cin, linha2);

        for (int i = 0; i < c; i++)
        {
            char char1 = tolower(linha1[i]);
            char char2 = tolower(linha2[i]);

            dicionario[char1] = char2; // Z minúsculo aponta para P minúsculo
            dicionario[char2] = char1; // P minúsculo aponta para Z minúsculo
        }

    for(int i = 0; i < n; i++)
        {
            getline(cin, frase);

            for (char letra : frase)
            {
                char letra_minuscula = tolower(letra);

                if (dicionario.count(letra_minuscula) == 1)
                {
                    char traduzida = dicionario[letra_minuscula];

                    if (isupper(letra))
                    {
                        cout << (char)toupper(traduzida);
                    }
                    else
                    {
                        cout << traduzida;
                    }
                }
                else
                {
                    cout << letra;
                }
            }

            cout << endl;

        }

        cout << endl;

        dicionario.clear();

    }

    return 0;
}
