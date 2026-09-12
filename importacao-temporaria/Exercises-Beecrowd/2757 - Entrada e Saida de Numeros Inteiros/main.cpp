#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;

    while (cin >> a >> b >> c)
    {

        cout << "A = " << a << ", B = " << b << ", C = " << c << endl;

        cout << "A = " << right << setw(10) << a
             << ", B = " << right << setw(10) << b
             << ", C = " << right << setw(10) << c << endl;

        cout << "A = " << setfill('0') << internal << setw(10) << a
             << ", B = " << setfill('0') << internal << setw(10) << b
             << ", C = " << setfill('0') << internal << setw(10) << c << endl;

        cout << setfill(' ');
        cout << "A = " << left << setw(10) << a
             << ", B = " << left << setw(10) << b
             << ", C = " << left << setw(10) << c << endl;
    }

    return 0;
}
