#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    char sep1, sep2, sep3;

    while (cin >> num1 >> sep1 >> num2 >> sep2 >> num3 >> sep3 >> num4)
    {
        cout << setfill('0') << setw(3) << num1 << endl;
        cout << setfill('0') << setw(3) << num2 << endl;
        cout << setfill('0') << setw(3) << num3 << endl;
        cout << setfill('0') << setw(2) << num4 << endl;
    }

    return 0;
}
