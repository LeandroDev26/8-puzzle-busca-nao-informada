#include <iostream>

using namespace std;

int main()
{
    int opc = 0, alco = 0, gaso = 0, dies = 0;

    while(opc != 4)
    {
        cin>> opc;

        if(opc == 1)
        {

            alco ++;

        }
        else if ( opc == 2)
        {
            gaso ++;
        }
        else if ( opc == 3)
        {
            dies ++;
        }
        else if( opc == 4)
        {
            break;
        }
    }

    cout<< "MUITO OBRIGADO"<<endl;
    cout<< "Alcool: "<< alco <<endl;
    cout<< "Gasolina: "<< gaso <<endl;
    cout<< "Diesel: "<< dies <<endl;


    return 0;
}
