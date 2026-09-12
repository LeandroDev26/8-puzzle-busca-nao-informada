#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {


                int valor = abs(i - j) + 1;


                if (j == 0) {
                    cout << setw(3) << valor;
                } else {
                    cout << " " << setw(3) << valor;
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
