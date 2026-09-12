#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char nome[10];
    double salfix, totvend, total;
    cin>> nome >> salfix >> totvend;
    total = totvend * 0.15;
    total += salfix;
    cout<< fixed << setprecision(2);
    cout<< "TOTAL = R$ " << total << endl;

}
