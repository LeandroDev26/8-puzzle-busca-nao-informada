#include <iostream>
#include <string>

using namespace std;

int main()
{
    string k, frase;
    cin >> k;
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n ; i++)
    {
        getline(cin, frase);

        int indice_chave = 0;
        bool dentro_da_palavra = false;
        bool criptografar_atual = false;

        for (int j = 0; j < frase.length(); j++) {
            char c = frase[j];

            if (c == ' ') {
                cout << c;
                dentro_da_palavra = false;
            } else {

                if (!dentro_da_palavra) {
                    dentro_da_palavra = true;

                    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                        criptografar_atual = false;
                    } else {
                        criptografar_atual = true;
                    }
                }

                if (criptografar_atual) {

                    char letra_chave = k[indice_chave];
                    char nova_letra = ((c - 'a') + (letra_chave - 'a')) % 26 + 'a';

                    cout << nova_letra;

                    indice_chave = (indice_chave + 1) % k.length();
                } else {
                    cout << c;
                }
            }
        }

        cout << endl;
    }

    return 0;
}
