#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    int t, jipeIndo = 0, jipeVoltando = 0, passIda = 0, passVolta = 0;
    string acao;
    while((cin>> acao) && acao != "ABEND" )
    {
        cin>> t;

        if(acao == "SALIDA")
        {
            jipeIndo++;
            passIda += t;
        }
        else
        {
            jipeVoltando++;
            passVolta += t;
        }
    }
    int totJipe = (jipeIndo - jipeVoltando);
    int totpass = (passIda - passVolta);
    cout<<totpass<<endl;
    cout<<totJipe<<endl;









    return 0;
}
