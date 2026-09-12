#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double s, imposto = 0;
    cin >> s;

    cout << fixed << setprecision(2);

    if (s <= 2000.00) {
        cout << "Isento" << endl;
    } else {
        if (s > 4500.00) {
            // Taxa de 28% sobre o que excede 4500
            imposto += (s - 4500.00) * 0.28;
            s = 4500.00; // O que restou para as outras faixas é o limite dela
        }
        if (s > 3000.00) {
            // Taxa de 18% sobre o que excede 3000 (até 4500)
            imposto += (s - 3000.00) * 0.18;
            s = 3000.00;
        }
        if (s > 2000.00) {
            // Taxa de 8% sobre o que excede 2000 (até 3000)
            imposto += (s - 2000.00) * 0.08;
        }

        cout << "R$ " << imposto << endl;
    }

    return 0;
}
