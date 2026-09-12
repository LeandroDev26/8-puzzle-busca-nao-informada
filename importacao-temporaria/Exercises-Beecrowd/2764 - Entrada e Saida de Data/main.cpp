#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int dia, mes, ano ;
    char barra1, barra2;

    while(cin>> dia >> barra1 >> mes >> barra2 >> ano)
    {
        cout<< setfill('0') << setw(2) << mes << barra1 << setw(2) << dia << barra2 << setw(2) << ano<<endl;
        cout<< setfill('0') << setw(2) << ano << barra1 << setw(2) << mes << barra2 << setw(2) << dia<<endl;
        cout<< setfill('0') << setw(2) << dia << "-" << setw(2) << mes << "-" << setw(2) << ano<<endl;

    }













    return 0;
}
