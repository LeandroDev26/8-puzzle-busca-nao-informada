#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int positivo = 0;
    double a = 0.0, media = 0.0, total = 0.0;
    for(int i = 0 ; i < 6; i++)
    {
        cin>> a;
        if(a > 0)
        {
            media += a;
            positivo++;
        }


    }
    total = (media/positivo);
    cout<< fixed << setprecision(1);
    cout<< positivo << " valores positivos"<<endl;
    cout<< total <<endl;

    return 0;
}
