#include <iostream>

using namespace std;

int main()
{

    int t = 0, pa = 0, pb = 0, anos = 0;
    double g1 = 0.0, g2 = 0.0;
    cin>> t ;

    for( int i = 0 ; i < t ; i++)
    {

        cin>> pa >> pb >> g1 >> g2;
        anos = 0;

        while(pa <= pb )
        {

            pa += (int)(pa *(g1 /100.0)) ;
            pb += (int)(pb *(g2 / 100.0));
            anos++;

            if( anos > 100)
            {
                break;
            }
        }

        if(anos > 100)
        {
            cout<<"Mais de 1 seculo."<<endl;
        }
        else
        {
            cout<< anos << " anos."<<endl;
        }
    }

    return 0;
}
