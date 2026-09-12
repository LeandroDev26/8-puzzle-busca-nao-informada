#include <iostream>
#include <string>

using namespace std;

int main()
{

    int qt, n, m, soma ;
    string nome1, opc1, nome2, opc2;
    cin>> qt;

    for(int i = 0 ; i < qt ; i++)
    {
        soma = 0;
        cin>> nome1 >> opc1 >> nome2 >> opc2;
        cin>> n >> m;
        soma = (n + m);

        if(opc1 == opc2)
        {
            return 0;
        }

        if(soma % 2 == 0 && (opc1 == "PAR") )
        {
            cout<< nome1<<endl;
        }
        else if(soma % 2 == 0 && (opc2 == "PAR") )
        {
            cout<< nome2<<endl;
        }
        else if(soma % 2 == 1 && (opc1 == "IMPAR") )
        {
            cout<< nome1<<endl;

        }
        else if(soma % 2 == 1 && (opc2 == "IMPAR") )
        {
            cout<< nome2<<endl;
        }


    }




    return 0;
}
