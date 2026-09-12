#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a1, a2, a3;

    cin >> a1 >> a2 >> a3;

    int t1 = (a2 * 2) + (a3 * 4); // Maquina no 1 andar
    int t2 = (a1 * 2) + (a3 * 2); // Maquina no 2 andar
    int t3 = (a1 * 4) + (a2 * 2); // Maquina no 3 andar

    int minutos = min({t1, t2, t3});

    cout << minutos << endl;

    return 0;
}
