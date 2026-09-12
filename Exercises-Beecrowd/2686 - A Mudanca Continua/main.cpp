#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double graus ;
    while (cin>> graus)
    {
        int horas = 0, minutos = 0, segundos = 0, totseg = 0, segundosrestante = 0, segundosfinais = 0;
        totseg = (graus*240.0);
        totseg += 21600.0;
        segundos = totseg;
        segundos = segundos % 86400;

        horas = segundos / 3600;
        segundosrestante = segundos % 3600;
        minutos = segundosrestante / 60;
        segundosfinais = segundosrestante % 60;
        segundos = segundosfinais;

        if((graus >= 0 && graus < 90) || graus == 360 )
        {
            cout<<"Bom Dia!!"<<endl;
        }
        else if( graus >= 90 && graus < 180)
        {

            cout<<"Boa Tarde!!"<<endl;

        }
        else if( graus >= 180 && graus < 270)
        {
            cout<<"Boa Noite!!"<<endl;

        }
        else
        {
            cout<< "De Madrugada!!"<<endl;

        }
        cout << setfill('0') << setw(2) << horas << ":" << setw(2) << minutos << ":" << setw(2) << segundos <<endl;

    }









    return 0;
}
