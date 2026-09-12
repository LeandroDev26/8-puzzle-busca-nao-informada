#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra1, palavra2;

    cin >> palavra1 >> palavra2;

    if (palavra1 <= palavra2) {
        cout << palavra1 << "\n";
        cout << palavra2 << "\n";
    } else {
        cout << palavra2 << "\n";
        cout << palavra1 << "\n";
    }

    return 0;
}
