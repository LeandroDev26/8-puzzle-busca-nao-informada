#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int  totcomp, p, q ;
    double  valortot = 0.0;

    cin>> totcomp;

    for(int i = 0 ; i < totcomp ; i++)
    {
        cin>> p >> q;

        if(p == 1001)
        {

            valortot += (1.50 * q);
        }
        else  if(p == 1002)
        {

            valortot += (2.50 * q);
        }
        else  if(p == 1003)
        {

            valortot += (3.50 * q);
        }
        else  if(p == 1004)
        {

            valortot += (4.50 * q);
        }
        else  if(p == 1005)
        {

            valortot += (5.50 * q);
        }

    }

    cout<< fixed << setprecision(2) << valortot << endl;

    return 0;
}
