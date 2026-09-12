#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double nota = 0, media = 0, cont = 0;
    int opc = 1;
    cout<< fixed << setprecision(2);

    while( opc == 1)
    {
        media = 0, cont = 0;

        while (cont < 2)
        {
            cin>> nota;

            if( nota >= 0 && nota<= 10)
            {
                media+= nota;
                cont++;

            }
            else
            {
                cout<<"nota invalida"<<endl;
            }

        }

        media /= 2;
        cout<<"media = "<<media<<endl;

        opc = 0;
        while( opc != 1  && opc != 2)
        {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>> opc;
        }
    }
    return 0;

}














