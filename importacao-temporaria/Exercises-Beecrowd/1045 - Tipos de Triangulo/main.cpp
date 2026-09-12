#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c;


    if (b > a) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (c > a) {
        double temp = a;
        a = c;
        c = temp;
    }
    if (c > b) {
        double temp = c;
        c = b;
        b = temp;
    }


    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }


    if ((a * a) == (b * b) + (c * c)) {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if ((a * a) > (b * b) + (c * c)) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if ((a * a) < (b * b) + (c * c)) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }


    if (a == b && b == c) {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if (a == b || b == c || a == c) {

        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
