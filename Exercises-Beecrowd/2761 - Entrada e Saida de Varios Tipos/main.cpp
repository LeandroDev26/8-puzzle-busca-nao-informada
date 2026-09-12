#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    int a ;
    float b ;
    char c ;
    string d;

    while(cin>> a >> b >> c)
    {
        cin.ignore();
        getline(cin, d);

        cout << a << fixed << setprecision(6) << b << c << d << endl;
        cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
        cout << setw(10) << a
             << setw(10) << b
             << setw(10) << c
             << setw(10) << d << endl;
    }





    return 0;
}
