#include <iostream>

using namespace std;

int main() {
    int n, ai;
    cin >> n;

    int maior = 0;
    for (int i = 0; i < n; i++) {
        cin >> ai;
        if (ai > maior) {
            maior = ai;
        }
    }

    cout << maior + 1 << endl;

    return 0;
}
