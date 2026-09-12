#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{

// Mapeamento dos alimentos e suas respectivas quantidades de Vitamina C (em mg)
    map<string, int> tabela_vitC =
    {
        {"suco de laranja", 120},
        {"morango fresco", 85},
        {"mamao", 85},
        {"goiaba vermelha", 70},
        {"manga", 56},
        {"laranja", 50},
        {"brocolis", 34}
    };

    int T;

    // O loop continua ate que a entrada seja 0
    while (cin >> T && T != 0)
    {
        int total_consumido = 0;



        for (int i = 0; i < T; ++i)
        {
            int N;
            string alimento;

            // Le a quantidade consumida
            cin >> N;

            // Ignora o espaço em branco entre o número e o nome do alimento
            cin.ignore();

            // Le o nome do alimento (que pode conter espacos)
            getline(cin, alimento);

            // Multiplica a quantidade consumida pelo valor nutricional e adiciona ao total
            total_consumido += N * tabela_vitC[alimento];
        }

        // Verifica o total consumido em relacao limite diario (110 mg a 130 mg)
        if (total_consumido < 110)
        {
            cout << "Mais " << 110 - total_consumido << " mg\n";
        }
        else if (total_consumido > 130)
        {
            cout << "Menos " << total_consumido - 130 << " mg\n";
        }
        else
        {
            cout << total_consumido << " mg\n";
        }


    }








    return 0;
}
