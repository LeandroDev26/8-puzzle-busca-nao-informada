#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n ;
    string opc1, opc2;

    cin>> n;
    for(int i = 0 ; i < n; i++)
    {

        cin>> opc1 >> opc2 ;

        if(opc1 == "ataque" && opc2 == "pedra")
        {
            cout<<"Jogador 1 venceu"<<endl;
        }
        else  if(opc1 == "pedra" && opc2 == "ataque")
        {
            cout<<"Jogador 2 venceu"<<endl;
        }
        else if(opc1 == "ataque" && opc2 == "ataque")
        {
            cout<<"Aniquilacao mutua"<<endl;
        }
        else if(opc1 == "pedra" && opc2 == "papel")
        {
            cout<<"Jogador 1 venceu"<<endl;
        }
        else if(opc1 == "papel" && opc2 == "pedra")
        {
            cout<<"Jogador 2 venceu"<<endl;
        }
        else if(opc1 == "ataque" && opc2 == "papel")
        {
            cout<<"Jogador 1 venceu"<<endl;
        }
        else if(opc1 == "papel" && opc2 == "ataque")
        {
            cout<<"Jogador 2 venceu"<<endl;
        }
        else if(opc1 == "papel" && opc2 == "papel")
        {
            cout<<"Ambos venceram"<<endl;

        }else if(opc1 == "pedra" && opc2 == "pedra")
        {
            cout<<"Sem ganhador"<<endl;
        }
    }

    return 0;
}
