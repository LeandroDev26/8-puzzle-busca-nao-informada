#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    double s, b, a, s1, b1, a1, tots = 0, totb = 0, tota = 0, totAs = 0, totAb = 0, totAa = 0;
    int n;
    string nome;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin>>nome;
        cin>> s >> b >> a ;
        tots += s;
        totb += b;
        tota += a;

        cin>> s1 >> b1 >> a1 ;
        totAs += s1;
        totAb += b1;
        totAa += a1;


    }

    double percentualsaque = (totAs/tots)*100;
    double percentualbloqueio = (totAb/totb)*100;
    double percentualataque = (totAa/tota)*100;

    cout<< fixed << setprecision(2);
    cout<<"Pontos de Saque: " << percentualsaque <<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<< percentualbloqueio<<" %."<<endl;
    cout<<"Pontos de Ataque: "<< percentualataque<<" %."<<endl;








    return 0;
}
