#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int h, horaChegada, atraso, m;
    char lixo;
    while(cin>> h >> lixo >> m)
    {

        horaChegada = ((h + 1) * 60) + m;
        atraso = horaChegada - 480;
        if( atraso < 0 )
        {
            cout<< "Atraso maximo: 0"<<endl;
        }
        else
        {
            cout<<"Atraso maximo: "<< atraso <<endl;
        }

    }





    return 0;
}
