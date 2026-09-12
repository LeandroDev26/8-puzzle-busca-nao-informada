#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x1, y1;
    double x2, y2;
    double distancia;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    double parte1 = pow(x2 - x1, 2);
    double parte2 = pow(y2 - y1, 2);

    distancia = sqrt(parte1 + parte2);

    cout << fixed << setprecision(4);
    cout << distancia << endl;

    return 0;
}
