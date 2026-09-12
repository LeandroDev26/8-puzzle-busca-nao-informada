#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;


    while (cin >> a && a != 0)
    {
        cin >> b >> c;

        int area = a * b;
        int areaTotal = (area * 100) / c;
        int areaDolado = sqrt(areaTotal);

        cout << areaDolado << endl;
    }

    return 0;
}
