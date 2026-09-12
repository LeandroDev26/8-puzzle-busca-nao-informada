#include <iostream>

using namespace std;

int main()
{
    long long n;

    while (cin >> n)
    {
        long long combinacoes_4 = (n * (n - 1) * (n - 2) * (n - 3)) / 24;
        long long combinacoes_2 = (n * (n - 1)) / 2;

        long long partes = combinacoes_4 + combinacoes_2 + 1;

        cout << partes << endl;
    }

    return 0;
}
