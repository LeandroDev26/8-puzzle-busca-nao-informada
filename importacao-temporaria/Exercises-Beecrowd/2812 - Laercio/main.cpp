#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, mi;

    if (cin >> n)
    {
        for (int caso = 0; caso < n; caso++)
        {
            vector<int> lista;
            cin >> m;

            for (int i = 0; i < m; i++)
            {
                cin >> mi;
                if (mi % 2 == 1)
                {
                    lista.push_back(mi);
                }
            }

            sort(lista.begin(), lista.end());

            vector<int> listaOrganizada;

            int ini = 0;
            int fim = lista.size() - 1;

            while (ini <= fim)
            {
                listaOrganizada.push_back(lista[fim]);
                fim--;

                if (ini <= fim)
                {
                    listaOrganizada.push_back(lista[ini]);
                    ini++;
                }
            }

            for (size_t i = 0; i < listaOrganizada.size(); i++)
            {
                cout << listaOrganizada[i];
                if (i < listaOrganizada.size() - 1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
