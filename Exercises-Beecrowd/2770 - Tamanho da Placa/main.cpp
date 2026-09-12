#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, m, xi, yi;

    while(cin >> x >> y >> m) {
        for(int i = 0; i < m ; i++) {
            cin >> xi >> yi;

            if((xi <= x && yi <= y) || (xi <= y && yi <= x)) {
                cout << "Sim\n";
            }
            else {
                cout << "Nao\n";
            }
        }
    }

    return 0;
}
