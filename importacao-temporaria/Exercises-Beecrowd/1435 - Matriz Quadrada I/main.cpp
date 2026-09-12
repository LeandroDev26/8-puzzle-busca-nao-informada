#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {


                int dist_cima = i;
                int dist_baixo = n - 1 - i;
                int dist_esq = j;
                int dist_dir = n - 1 - j;


                int valor = min({dist_cima, dist_baixo, dist_esq, dist_dir}) + 1;


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
