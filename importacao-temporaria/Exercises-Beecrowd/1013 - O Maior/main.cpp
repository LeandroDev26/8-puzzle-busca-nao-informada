#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;


    int maiorAB = (A + B + abs(A - B)) / 2;


    int maiorFinal = (maiorAB + C + abs(maiorAB - C)) / 2;

    cout << maiorFinal << " eh o maior" << "\n";

    return 0;
}
