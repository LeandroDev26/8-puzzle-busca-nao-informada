#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;


vector<string> separarBlocos(string formula)
{
    vector<string> blocos;
    string blocoAtual = "";

    for (int y = 0; y < formula.length(); y++)
    {
        if (isupper(formula[y]))
        {
            if (!blocoAtual.empty())
            {
                blocos.push_back(blocoAtual);
                blocoAtual = "";
            }
            blocoAtual += formula[y];
        }
        else
        {
            blocoAtual += formula[y];
        }
    }
    if (!blocoAtual.empty())
    {
        blocos.push_back(blocoAtual);
    }
    return blocos;
}

int main()
{
    int n, t, u;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<vector<string>> listaPerigos;

        cin >> t;
        for (int j = 0; j < t; j++)
        {
            string formulaDanger;
            cin >> formulaDanger;
            listaPerigos.push_back(separarBlocos(formulaDanger));
        }

        cin >> u;
        for (int k = 0; k < u; k++)
        {
            string elementosJuvenal;
            cin >> elementosJuvenal;

            vector<string> experimento = separarBlocos(elementosJuvenal);

            bool explodiu = false;


            for (int p = 0; p < listaPerigos.size(); p++)
            {
                vector<string> perigo = listaPerigos[p];

                if (perigo.size() > experimento.size()) continue;

                for (int inicio = 0; inicio <= experimento.size() - perigo.size(); inicio++)
                {
                    bool match = true;
                    for (int pos = 0; pos < perigo.size(); pos++)
                    {
                        if (experimento[inicio + pos] != perigo[pos])
                        {
                            match = false;
                            break;
                        }
                    }

                    if (match)
                    {
                        explodiu = true;
                        break;
                    }
                }

                if (explodiu) break;
            }

            if (explodiu)
            {
                cout << "Abortar\n";
            }
            else
            {
                cout << "Prossiga\n";
            }
        }


        if (i < n - 1)
        {
            cout << "\n";
        }
    }

    return 0;
}
