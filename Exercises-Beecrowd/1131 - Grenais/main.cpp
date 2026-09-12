#include <iostream>

using namespace std;

int main()
{
    int opc = 1, inter = 0, gremio = 0, grenais = 0, vitinter = 0, vitgremi = 0, empates = 0;

    while(opc == 1)
    {

        cin>> inter >> gremio;
        grenais++;

        opc = 0;

        if(inter > gremio)
        {
            vitinter++;
        }
        else if(gremio > inter)
        {
            vitgremi++;
        }
        else
        {
            empates++;
        }
        while(opc != 1 && opc != 2)
        {
            cout<<"Novo grenal (1-sim 2-nao)"<< endl;
            cin>> opc;

        }

    }

    cout<<grenais<<" grenais"<<endl;
    cout<< "Inter:"<<vitinter<<endl;
    cout<<"Gremio:"<<vitgremi<<endl;
    cout<<"Empates:"<<empates<<endl;

    if(vitinter > vitgremi)
    {
        cout<< "Inter venceu mais"<<endl;
    }
    else if(vitinter < vitgremi)
    {
        cout<<"Gremio venceu mais"<<endl;
    }
    else
    {
        cout<<"Nao houve vencedor"<<endl;
    }


    return 0;
}
