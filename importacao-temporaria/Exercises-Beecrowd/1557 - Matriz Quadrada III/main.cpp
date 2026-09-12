#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int n;

    while (cin >> n && n != 0)
    {

        long long maior_numero = pow(2, (n - 1) + (n - 1));

        int T = to_string(maior_numero).length();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                long long valor = pow(2, i + j);

                if (j == 0)
                {
                    cout << setw(T) << valor;
                }
                else
                {
                    cout << " " << setw(T) << valor;
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
