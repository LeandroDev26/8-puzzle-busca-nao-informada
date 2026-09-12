#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{


    int h, m ;

    while(cin>> h >> m)
    {
        vector<double> lista;
        int totmin = (h*60);
        int qt = totmin/m;

        for(int i = 0 ; i < qt; i++)
        {
            double xi;
            cin>> xi;
            lista.push_back(xi);

        }

        double media = 0 ;

        for(int j = 0 ; j < qt; j++)
        {
            media += lista[j];

        }

        media = (media/qt);
        double somatorio = 0;
        for(int k = 0 ; k < qt; k++)
        {

            somatorio += pow(lista[k] - media, 2);

        }

        double precisao_final = somatorio / (qt - 1);
        double result = sqrt(precisao_final);

        cout<< fixed << setprecision(5)<< result <<endl;



    }


    return 0;
}
