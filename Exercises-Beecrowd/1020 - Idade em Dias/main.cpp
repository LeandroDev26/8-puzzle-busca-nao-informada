#include <iostream>

using namespace std;

int main (){
    int n;
    int anos, meses, dias;

    cin >> n;

    anos = n / 365;
    n = n % 365;

    meses = n / 30;
    n = n % 30;

    dias = n;
    cout << anos << " ano(s)" << "\n";
    cout << meses << " mes(es)" << "\n";
    cout << dias << " dia(s)" << "\n";

    return 0;
}
