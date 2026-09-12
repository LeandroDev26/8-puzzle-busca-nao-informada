#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Expressao
{
    int x;
    int y;
    int z;
};

int main()
{
    int t;


    while (cin >> t)
    {
        vector<Expressao> expressoes(t);

        for (int i = 0; i < t; i++)
        {
            char sinal_igual;

            cin >> expressoes[i].x >> expressoes[i].y >> sinal_igual >> expressoes[i].z;
        }

        vector<string> eliminados;


        for (int i = 0; i < t; i++)
        {
            string nome;
            int indice;
            char resposta;

            cin >> nome >> indice >> resposta;


            Expressao ex = expressoes[indice - 1];

            bool soma_certa = (ex.x + ex.y == ex.z);
            bool sub_certa  = (ex.x - ex.y == ex.z);
            bool mult_certa = (ex.x * ex.y == ex.z);
            bool impossivel = (!soma_certa && !sub_certa && !mult_certa);

            bool acertou = false;

            if (resposta == '+' && soma_certa) acertou = true;
            else if (resposta == '-' && sub_certa) acertou = true;
            else if (resposta == '*' && mult_certa) acertou = true;
            else if (resposta == 'I' && impossivel) acertou = true;

            if (!acertou)
            {
                eliminados.push_back(nome);
            }
        }


        sort(eliminados.begin(), eliminados.end());

        if (eliminados.empty())
        {
            cout << "You Shall All Pass!" << endl;
        }
        else if (eliminados.size() == t)
        {
            cout << "None Shall Pass!" << endl;
        }
        else
        {
            for (int i = 0; i < eliminados.size(); i++)
            {
                if (i > 0) cout << " ";
                cout << eliminados[i];
            }
            cout << endl;
        }
    }

    return 0;
}
