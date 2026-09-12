#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, b;
    double c, d;

    while(cin >> a >> b >> c >> d)
    {
        // 6 casas decimais (Padrao)
        cout << fixed << setprecision(6);
        cout << "A = " << a << ", B = " << b << endl;
        cout << "C = " << c << ", D = " << d << endl;

        // 1 casa decimal
        cout << fixed << setprecision(1);
        cout << "A = " << a << ", B = " << b << endl;
        cout << "C = " << c << ", D = " << d << endl;

        // 2 casas decimais
        cout << fixed << setprecision(2);
        cout << "A = " << a << ", B = " << b << endl;
        cout << "C = " << c << ", D = " << d << endl;

        // 3 casas decimais
        cout << fixed << setprecision(3);
        cout << "A = " << a << ", B = " << b << endl;
        cout << "C = " << c << ", D = " << d << endl;

        // Notacao cientifica com 'E' maiusculo e 3 casas decimais
        cout << scientific << uppercase << setprecision(3);
        cout << "A = " << a << ", B = " << b << endl;
        cout << "C = " << c << ", D = " << d << endl;

        // Retornando para formatacao normal, sem letras maiúsculas e 0 casas (parte inteira arredondada)
        cout << fixed << nouppercase << setprecision(0);
        cout << "A = " << a << ", B = " << b << endl;
        cout << "C = " << c << ", D = " << d << endl;
    }

    return 0;
}
