#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;


    int x = a;
    int y = b;
    int z = c;


    int temp;


    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }


    if (x > z) {
        temp = x;
        x = z;
        z = temp;
    }


    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
