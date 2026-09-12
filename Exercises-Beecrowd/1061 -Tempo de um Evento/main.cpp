#include <iostream>
#include <string>

using namespace std;

int main()
{
    string lixo;
    int diaIni, horaIni, minIni, segIni, diaFin, horaFin, minFin, segFin, totini = 0, totfin = 0;

    cin>> lixo >> diaIni;
    cin>>horaIni >> lixo >> minIni >> lixo >> segIni;
    cin>> lixo >> diaFin;
    cin>>horaFin >> lixo >> minFin>> lixo >> segFin;

    // total de segundos iniciais
    totini += (diaIni * 86400);
    totini += (horaIni * 3600);
    totini += (minIni * 60);
    totini += segIni;

    // total de segundos finais
    totfin += (diaFin * 86400);
    totfin += (horaFin * 3600);
    totfin += (minFin * 60);
    totfin += segFin;

    int total =(totfin - totini);


    int dia = (total / 86400);
    total = (total % 86400);

    int hora = (total / 3600);
    total = (total % 3600);

    int minu = (total / 60);
    total  = (total % 60);

    int seg = total;

    cout<< dia << " dia(s)"<< endl;
    cout << hora << " hora(s)"<<endl;
    cout<< minu << " minuto(s)"<<endl;
    cout<< seg << " segundo(s)"<<endl;

    return 0;
}
