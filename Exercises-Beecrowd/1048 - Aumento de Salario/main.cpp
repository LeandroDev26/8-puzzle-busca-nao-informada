#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s, p;
    cin>> s;
    cout<< fixed << setprecision(2);
    if(s > 0.00 && s <= 400.00)
    {

        p = s*0.15;
        s += p;
        cout<< "Novo salario: "<< s <<endl;
        cout<< "Reajuste ganho: "<< p <<endl;
        cout<< "Em percentual: 15 %" <<endl;
    }
    else if(s > 400.00 && s <= 800.00)
    {

        p = s*0.12;
        s += p;
        cout<< "Novo salario: "<< s <<endl;
        cout<< "Reajuste ganho: "<< p <<endl;
        cout<< "Em percentual: 12 %" <<endl;
    }

    else if(s > 800.00 && s <= 1200.00)
    {

        p = s*0.10;
        s += p;
        cout<< "Novo salario: "<< s <<endl;
        cout<< "Reajuste ganho: "<< p <<endl;
        cout<< "Em percentual: 10 %" <<endl;
    }

    else if(s > 1200.00 && s <= 2000.00)
    {

        p = s*0.07;
        s += p;
        cout<< "Novo salario: "<< s <<endl;
        cout<< "Reajuste ganho: "<< p <<endl;
        cout<< "Em percentual: 7 %" <<endl;
    }

    else
    {

        p = s*0.04;
        s += p;
        cout<< "Novo salario: "<< s <<endl;
        cout<< "Reajuste ganho: "<< p <<endl;
        cout<< "Em percentual: 4 %" <<endl;
    }

   return 0;
}
